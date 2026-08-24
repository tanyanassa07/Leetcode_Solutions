class Solution {
public:
    string reverseByType(string s) {
string ans="";
string s1="";
string s2="";
int i;
int n=s.length();
for(i=0;i<n;i++)
{
if('a'<=s[i]&&s[i]<='z')
{
s1+=s[i];
}
else
{
s2+=s[i];
}
}   
reverse(s1.begin(),s1.end());
reverse(s2.begin(),s2.end());
int m=0;
int k=0;
for(i=0;i<n;i++)
{
if('a'<=s[i]&&s[i]<='z')
{
ans+=s1[m];
m=m+1;
}
else
{
ans+=s2[k];
k=k+1;
}
}
return ans;
    }
};