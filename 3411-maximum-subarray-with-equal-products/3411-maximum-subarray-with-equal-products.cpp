class Solution {
public:
    int maxLength(vector<int>& nums) {
int n=nums.size();
int i;
int j;
int counter=1;
for(i=0;i<n;i++)
{
int gcd1=nums[i];
int lcm1=nums[i];
double product=1;
for(j=i;j<n;j++)
{
gcd1=gcd(gcd1,nums[j]);
lcm1=lcm(lcm1,nums[j]);
product=product*nums[j];
if(product>(lcm1*gcd1))
{break;}
if(gcd1*lcm1==product)
counter=max(counter,(j-i+1));
}
}
return counter;       
    }
};