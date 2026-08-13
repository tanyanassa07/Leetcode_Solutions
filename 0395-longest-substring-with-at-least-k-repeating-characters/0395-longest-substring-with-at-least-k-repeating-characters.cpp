class Solution {
public:
    int longestSubstring(string s, int k) {
unordered_map<char,int>mpp1;
for(int i=0;i<s.length();i++)
{
mpp1[s[i]]++;
}
set<char>st;
for(auto i : mpp1)
{
if(i.second<k)
{st.insert(i.first);}
}
int n=s.length();
int count=0;
int i;
int j;
for(i=0;i<n;i++){
unordered_map<int,int>mpp;
for(j=i;j<n;j++){
if(st.find(s[j])==st.end())
{}
else
{break;}
mpp[s[j]]++;
bool yes=true;
for(auto i : mpp)
{
if(i.second<k)
{
yes=false;
break;
}
}
if(yes)
count=max(count,(j-i+1));
}
}
return count;
    }
};