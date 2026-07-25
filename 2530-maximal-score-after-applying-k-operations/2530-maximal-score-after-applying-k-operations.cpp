class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
long long score=0;
int n=nums.size();
int i;
priority_queue<int,vector<int>>p;
int count=0;
for(i=0;i<n;i++)
p.push(nums[i]);
while(count!=k){
count=count+1;
auto it=p.top();
score=score+it;
p.pop();
p.push(ceil(it/3.0));
}
return score;      
    }
};