class Solution {
public:
    int countConsistent(vector<int>& nums) {
int n=nums.size();
int mini=INT_MAX;
int i;  
int j;
int counter=0;
counter=counter+nums.size();
for(i=0;i<n-1;i++)
{
int mini=nums[i];
int value=nums[i];
for(j=i+1;j<n;j++)
{
value=value&nums[j];
mini=min(mini,nums[j]);
if(value==mini)
{
counter=counter+1;
}
}
}
return counter;
    }
};