class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
int n=nums.size();
int i;
int j;
int k;
int answer=0;
int distance=INT_MAX;
int sum;
int diff;
for(i=0;i<n-2;i++){
for(j=i+1;j<n-1;j++){
for(k=j+1;k<n;k++){
sum=nums[i]+nums[j]+nums[k];
diff=abs(target-sum);
if(diff<distance)
{
distance=diff;
answer=sum;
}
}
}
}    
return answer;
    }
};