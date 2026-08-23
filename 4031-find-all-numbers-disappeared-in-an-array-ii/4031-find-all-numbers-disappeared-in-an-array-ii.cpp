class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
int an=upper+1;
int freq[100001]={0};
int i;
vector<vector<int>>answer;
int start;
int end;
int n=nums.size();
for(i=0;i<n;i++)
freq[nums[i]]=1;
for(i=lower;i<=upper;i++){
if(freq[i]==0)
{start=i;
while(freq[i]==0)
{
end=i;
i=i+1;
if(i>upper)
{break;}
}
answer.push_back({start,end});
}
}
return answer;       
    }
};