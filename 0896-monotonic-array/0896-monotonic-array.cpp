class Solution {
public:
int Find_Value(vector<int>&nums)
{
int n=nums.size();
int i=0;
while(nums[i]==nums[i+1]&&i<n-1)
{i=i+1;}
if(nums[i]<nums[i+1])
{return 1;}
else
{return 2;}
}
    bool isMonotonic(vector<int>& nums) {
int n=nums.size();
if(nums.size()==1)
{return true;}
int i;
for(i=0;i<n-1;i++)
{
if(nums[i]==nums[i+1])
{}
else{break;}
}
if(i==n-1)
{return true;}
int a=Find_Value(nums); 
if(a==1)
{
for(i=0;i<n-1;i++)
{
if(nums[i]>nums[i+1])
{return false;}
}
}
else
{
for(i=1;i<n;i++)
{
if(nums[i]>nums[i-1])
{return false;}
}
}
return true;    
    }
};