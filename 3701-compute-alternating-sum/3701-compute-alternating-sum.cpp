class Solution {
public:
    int alternatingSum(vector<int>& nums) {
int sum_even=0;
int sum_odd=0;
int i;
int n=nums.size();
for(i=0;i<n;i++)
{
if(i%2==0)
{sum_even=sum_even+nums[i];}
else{
sum_odd=sum_odd+nums[i];
}
} 
return sum_even-sum_odd;    
    }
};