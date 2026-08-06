class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
int n=nums.size();
int i;
int j;
int count=0;
int gdci;
for(i=0;i<n;i++)
{
gdci=nums[i];
if(gdci==k)
{count=count+1;}
for(j=i+1;j<n;j++)
{
gdci=gcd(gdci,nums[j]);
if(gdci==k)
{count=count + 1;}
else
{}
}
}
return count; 
    }
};