class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
int low=0;
int high=0;
int n=nums.size();
unordered_map<int,int>mpp;
int count=0;
while(high<n)
{
mpp[nums[high]]++;
while(mpp[nums[high]]>k)
{
mpp[nums[low]]--;
low=low+1;
}
count=max(count,(high-low+1));
high=high+1;
}  
return count; 
    }
};