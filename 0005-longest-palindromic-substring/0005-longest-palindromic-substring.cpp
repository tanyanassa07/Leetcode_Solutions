class Solution {
public:
    string longestPalindrome(string s) {
int n=s.length();
int i;
int j;
string q="";
int count;
int max_count=INT_MIN;
string ans="";
for(i=0;i<n;i++){
ans="";
for(j=i;j<n;j++){
ans+=s[j];
int n1=ans.size();
if(n1==1)
{count=n1;}
else{
    int k=0;
    int m=n1-1;
    while(k<m){
    if(ans[k]==ans[m])
    {k=k+1;
    m=m-1;}
    else
    {break;}
    }
if(k==m||k>m)
{count=n1;}
}
if(count>max_count){
max_count=count;
q=ans;
}
}
}    
return q;
    }
};