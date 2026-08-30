class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
unordered_map<int,int>mpp;
int i;
int n=nums.size();
for(i=0;i<n;i++)
mpp[nums[i]]++;
int c=0;
for(i=0;i<n;i++)
{
int num=nums[i];
int value=mpp[num];
int count=0;
while(i<n&&num==nums[i]){
count=count+1;
i=i+1;
}
i=i-1;
if(count==value)
c++;
}
return c;    
    }
};