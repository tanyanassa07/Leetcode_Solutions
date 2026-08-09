class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
int count=0;
int n=nums.size();
int i;
int j;
int sum=0;
for(i=0;i<n;i++){
sum=0;
for(j=i+1;j<n;j++){
sum=nums[i]+nums[j];
if(sum<target)
{count=count+1;}
}
}   
return count;   
    }
};