class Solution {
public:
    bool scoreBalance(string s) {
int answer=0;
int n=s.length();
int i;
for(i=0;i<n;i++)
{answer=answer+(s[i]-'a'+1);}   
int ans=0;
for(i=0;i<n;i++){
ans=ans+(s[i]-'a'+1);
if(ans==(answer-ans))
{return true;}
} 
return false; 
    }
};