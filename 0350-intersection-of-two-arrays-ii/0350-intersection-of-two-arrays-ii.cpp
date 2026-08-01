class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
vector<int>answer;
unordered_map<int,int>mpp1;
unordered_map<int,int>mpp2;
int n1=nums1.size();
int i;
int n2=nums2.size(); 
for(i=0;i<n1;i++)
mpp1[nums1[i]]++;
for(i=0;i<n2;i++)
mpp2[nums2[i]]++;
unordered_map<int,int>mpp3;
for(auto i : mpp1)
{
int key=i.first;
int value=i.second;
if(mpp2.find(key)!=mpp2.end())
{
if(value<mpp2[key])
{
mpp3[key]=value;
}
else
{
mpp3[key]=mpp2[key];
}
}
}
for(auto i:mpp3)
{
int value=i.second;
int count=0;
while(count!=value)
{
count=count+1;
answer.push_back(i.first);
}
}
return answer;
    }
};