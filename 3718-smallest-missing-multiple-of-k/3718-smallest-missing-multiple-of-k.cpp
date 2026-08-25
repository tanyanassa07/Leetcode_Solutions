class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
int answer=-1;
int n=nums.size();
int i;
set<int>st;
for(i=0;i<n;i++)
{st.insert(nums[i]);}
for(i=1;i<=1000;i++)
{
if(i%k==0 && st.find(i)==st.end())
{answer=i;
break;}
}    
return answer;
    }
};