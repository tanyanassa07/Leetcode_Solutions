class Solution {
public:
    int smallestNumber(int n, int t) {
int i;
int answer=0;
for(i=n;i<=100;i++)
{
int number=i;
int product=1;
while(number!=0)
{
product=product*(number%10);
number=number/10;
}
if(product%t==0)
{
answer=i;
break;
}
}     
return answer;  
    }
};