class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
vector<int>answer;
int n=nums.size();
int i;
int largest=INT_MIN;
int smallest=INT_MAX;
for(i=0;i<n;i++)
{
if(nums[i]>largest)
{largest=nums[i];}
if(nums[i]<smallest)
{smallest=nums[i];}
}
unordered_map<int,int>mpp;
for(i=0;i<n;i++)
{
if(nums[i]==largest||nums[i]==smallest)
{continue;}
mpp[nums[i]]++;
}
for(i=smallest+1;i<largest;i++)
{
int number=i;
if(mpp.find(number)==mpp.end())
{answer.push_back(number);}
}
return answer;        
    }
};