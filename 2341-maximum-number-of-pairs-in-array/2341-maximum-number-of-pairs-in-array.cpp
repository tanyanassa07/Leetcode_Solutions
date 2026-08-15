class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
int pairs=0;
int leftovers=0;
vector<int>answer;
int n=nums.size();
int i;
unordered_map<int,int>mpp;
for(i=0;i<n;i++)
{mpp[nums[i]]++;}
for(auto i : mpp)
{if(i.second%2==0)
{pairs+=(i.second)/2;}
else
{pairs+=(i.second-1)/2;
leftovers=leftovers+1;}
}
answer.push_back(pairs);
answer.push_back(leftovers);
return answer;     
    }
};