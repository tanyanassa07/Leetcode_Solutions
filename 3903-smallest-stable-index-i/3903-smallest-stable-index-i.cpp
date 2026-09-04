class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
int n=nums.size();
int i;
int j;
int maxi=INT_MIN;
int mini=INT_MAX;
for(i=0;i<n;i++)
{
maxi=max(maxi,nums[i]);
mini=INT_MAX;
for(j=i;j<n;j++)
{
mini=min(mini,nums[j]);
}
int stability=maxi-mini;
if(stability<=k)
{
return i;
}
}    
return -1;
    }
};