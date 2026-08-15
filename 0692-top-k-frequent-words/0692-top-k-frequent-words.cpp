class Solution {
public:
bool static comparator(pair<string,int>a,pair<string,int>b)
{
if(a.second==b.second)
{
if(a.first<b.first)
{return true;
}
}
if(a.second>b.second)
{return true;}
return false;
}
    vector<string> topKFrequent(vector<string>& words, int k) {
int n=words.size();
int i;
unordered_map<string,int>mpp;
for(i=0;i<n;i++)
{
mpp[words[i]]++;
}    
vector<pair<string,int>>pq;
for(auto i : mpp)
pq.push_back({i.first,i.second});
sort(pq.begin(),pq.end(),comparator);
vector<string>answer;
for(i=0;i<k;i++)
{answer.push_back(pq[i].first);}
return answer;
    }
};