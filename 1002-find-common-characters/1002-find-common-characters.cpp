class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
int n=words.size();
string s=words[0];
int i;
int j;
unordered_map<char,int>mpp;
int n1=s.length();
for(i=0;i<n1;i++)
{
mpp[s[i]]++;
}     
for(j=1;j<n;j++)
{
vector<char>answer;
s=words[j];
for(auto i : mpp)
{
if(s.find(i.first)==string::npos)
{answer.push_back(i.first);}
else{
if(count(s.begin(),s.end(),i.first)<=mpp[i.first])
{mpp[i.first]=count(s.begin(),s.end(),i.first);}
}
}
for(auto k: answer)
mpp.erase(k);
}
vector<string>aa;
for(auto i : mpp)
{
if(mpp[i.first]!=0)
{
while(i.second!=0)
{
string sm="";
sm+=i.first;
aa.push_back(sm);
i.second--;
}
}
}
return aa;
    }
};