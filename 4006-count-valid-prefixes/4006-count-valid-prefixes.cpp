class Solution {
public:
    int countValidPrefixes(string s) {
int zeroes=0;
int ones=0;
int count=0;
unordered_map<char,int>mpp;
int i=0;
int n=s.length();
for(i=0;i<n;i++){
mpp[s[i]]++;
if(mpp.size()==1 && mpp.begin()->second==1)
{count=count+1;}
else{
zeroes=mpp['0'];
ones=mpp['1'];
if(zeroes==ones+1||ones==zeroes+1||ones==zeroes)
{count=count+1;}
}}
return count;
    }
};