class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
vector<vector<string>>answer;
int n=strs.size();
int i;
vector<string>arr(n," ");
for(i=0;i<n;i++)
{
string s1=strs[i];
sort(s1.begin(),s1.end());
arr[i]=s1;
}
unordered_map<string,vector<int>>mpp;
for(i=0;i<n;i++)
{
mpp[arr[i]].push_back(i);
}
for(auto i : mpp)
{vector<string>a;
for(auto j : i.second)
{
a.push_back(strs[j]);
}
answer.push_back(a);
}
return answer;
    }
};