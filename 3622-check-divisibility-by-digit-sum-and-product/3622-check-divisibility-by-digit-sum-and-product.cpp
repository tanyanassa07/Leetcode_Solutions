class Solution {
public:
    bool checkDivisibility(int n) {
int digit_sum=0;
int digit_product=1;
int number=n;
while(n!=0){
digit_sum+=(n%10);
digit_product*=(n%10);
n=n/10;
}  
int sum=0;
sum=digit_sum+digit_product;    
if(number%sum==0)
    {return true;}
return false;
    }
};