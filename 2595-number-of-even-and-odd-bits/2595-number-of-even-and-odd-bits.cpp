class Solution {
public:
    vector<int> evenOddBit(int n) {
int count=0;
int even=0;
int odd=0;
while(n!=0)
{
int digit=n&1;
if(digit==1)
{
if(count%2==0)
{even=even+1;}
else
{odd=odd+1;}
}
n=n>>1;
count=count+1;
} 
return {even,odd};    
    }
};