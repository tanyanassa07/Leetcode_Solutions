class Solution {
public:
static bool compare(pair<char,int>p1,pair<char,int>p2)
{
if(p1.second>p2.second)
return true;
return false;
}
    int minimumPushes(string word) {
int n=word.length();
int i;
int freq[26]={0};
for(i=0;i<n;i++)
freq[word[i]-'a']++;
vector<pair<char,int>>pq;
for(i=0;i<=25;i++)
{
pq.push_back({char(i+'a'),freq[i]});    
}     
sort(pq.begin(),pq.end(),compare);
unordered_map<char,int>mpp;
int count=0;
int sum1=0;
for(i=0;i<n;i++)
{
count=count+1;
if(count<=8)
{mpp[pq[i].first]=1;}
else if(8<count && count<=16)
{mpp[pq[i].first]=2;}
else if(16<count && count<=24)
{mpp[pq[i].first]=3;}
else if(24<count &&count<=26)
{mpp[pq[i].first]=4;}
else{}
}
for(i=0;i<n;i++)
{
sum1=sum1+mpp[word[i]];
}
return sum1;
    }
};