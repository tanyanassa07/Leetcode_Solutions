class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
vector<int>array1;
vector<int>array2;
vector<int>result;
int n1=nums.size();
int i;
int m=0;
int n=0;
array1.push_back(nums[0]);
array2.push_back(nums[1]);
for(i=2;i<n1;i++)
{
if(array1[m]>array2[n])
{
m=m+1;
array1.push_back(nums[i]);
}
else
{
array2.push_back(nums[i]);
n=n+1;
}
}
for(i=0;i<array1.size();i++){
result.push_back(array1[i]);
}
for(i=0;i<array2.size();i++){
result.push_back(array2[i]);
}
return result;      
    }
};