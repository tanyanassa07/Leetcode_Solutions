class Solution {
public:
    string digitSum(string s, int k) {
int n=s.length();
int i;
string a="";
string ans="";
int sum=0;
while(s.length()>k){
for(i=0;i<s.length();i++)
{
a=a+s[i];
sum=sum+(s[i]-'0');
if(a.size()==k)
{
ans=ans+to_string(sum);
sum=0;
a="";
}
}
if(!a.empty())
{
ans=ans+to_string(sum);
sum=0;
a="";
}
s=ans;
ans=""; 
}   
return s;
    }
};