class Solution {
public:
    int minimumPushes(string word) {
int n=word.length();
int i;
int sum=0;
if(n<=8)
{return n;}
else if(8<n && n<=16)
{
sum=sum+(n-8)*2;
sum=sum+8;
}    
else if(16<n && n<=24)
{
sum=sum+(n-16)*3;
sum=sum+(8*2);
sum=sum+(8*1);
}
else if(n>=25)
{
sum=sum+(8*1);
sum=sum+(8*2);
sum=sum+(8*3);
sum=sum+(n-24)*4;
}
else
{}
return sum;
    }
};