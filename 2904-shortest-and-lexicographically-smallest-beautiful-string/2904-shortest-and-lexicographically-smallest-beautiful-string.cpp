class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
int n=s.length();
int low=0;
int high=0;
int min_len=INT_MAX;
string ans="";
unordered_map<char,int>mpp;
while(high<n)
{
mpp[s[high]]++;
while(mpp['1']>k||s[low]=='0')
{
mpp[s[low]]--;
low=low+1;
}
if(mpp['1']==k)
{
string m=s.substr(low,high-low+1);
int length=m.length();
if(length==min_len)
{
ans=min(ans,m);
}
if(length<min_len)
{
min_len=length;
ans=m;
}
}
high=high+1;
} 
return ans;      
    }
};