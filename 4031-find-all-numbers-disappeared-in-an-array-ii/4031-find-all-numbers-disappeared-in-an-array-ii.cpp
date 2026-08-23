class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
vector<vector<int>>answer;
int n=nums.size();
int i;
int start;
int end;
set<int>st;
for(i=0;i<n;i++)
{st.insert(nums[i]);}
for(i=lower;i<=upper;i++)
{
if(st.find(i)!=st.end())
{}
else
{
start=i;
while(i<=upper&&st.find(i)==st.end())
{end=i;
i=i+1;}
answer.push_back({start,end});
}
}
return answer;     
    }
};