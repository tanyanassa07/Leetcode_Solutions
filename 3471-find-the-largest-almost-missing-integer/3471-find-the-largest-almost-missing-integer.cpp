class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
unordered_map<int,int>mpp;
int n=nums.size();
int i;
int j;
int answer=-1;
for(i=0;i<=(n-k);i++){
for(j=i;j<(i+k);j++){
mpp[nums[j]]++;
}
} 
if(nums.size()==k){
int maxi=-1;
for(i=0;i<n;i++)
maxi=max(maxi,nums[i]);
return maxi;
}
for(auto i : mpp){
if(i.second==1)
{answer=max(answer,i.first);}
}     
return answer;
    }
};