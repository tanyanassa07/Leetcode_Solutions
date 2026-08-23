class Solution {
public:
    bool isPalindromic(string s) {
string answer="";
for(int i=0;i<s.length();i++){
int a=s[i];
string ans="";
stack<int>st;
while(a!=0)
{
st.push(a%2);
a=a/2;
}
while(!st.empty())
{
string a=to_string(st.top());
ans+=a;
st.pop();}
if(ans.size()==8)
{answer+=ans;}
else{
int k=8-ans.size();
for(int j=0;j<k;j++)
{
ans='0'+ans;
}
answer=answer+ans;
}
}
int i=0;
int j=answer.size()-1;
while(i<j)
{
if(answer[i]==answer[j])
{i++;j--;}
else
{
break;
}
}  
if(i>j||i==j)
{return true;}
return false;
    }
};