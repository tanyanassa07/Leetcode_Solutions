class Solution {
public:
    int maxProduct(vector<int>& nums) {
int n;
n=nums.size();
int i;
priority_queue<int,vector<int>>p;
for(i=0;i<n;i++)
{
p.push(nums[i]);
}
int a=p.top();
p.pop();
int b=p.top();
p.pop();
return (a-1)*(b-1);   
    }
};