class Solution {
public:
    int longestSubarray(vector<int>& nums) {
int count=0;
unordered_map<int,int>mpp;
int low=0;
int high=0;
int n=nums.size();
while(high<n)
{
mpp[nums[high]]++;
while(mpp[0]>1)
{
mpp[nums[low]]--;
low=low+1;
}
count=max(count,high-low);
high=high+1;
}
return count;     
    }
};