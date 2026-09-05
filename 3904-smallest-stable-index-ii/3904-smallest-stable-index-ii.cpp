class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
int max=INT_MIN;
int min=INT_MAX;
int n=nums.size();
vector<int>maxn(n,0);
vector<int>minn(n,0);
int index=-1;
for(int i=0;i<n;i++)
{
if(max<nums[i])
max=nums[i];
maxn[i]=max;
}  
for(int i=n-1;i>=0;i--)
{
if(min>nums[i])
min=nums[i];
minn[i]=min;
}
for(int i=0;i<n;i++)
{
int answer=maxn[i]-minn[i];
if(answer<=k)
{
index=i;
break;
}
}
return index;
    }
};