class Solution {
public:
static bool compare(pair<int,float>p1,pair<int,float>p2)
{
if(p1.second<p2.second)
{return true;}
return false;
}
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
vector<vector<int>>answer;
int n=points.size();
int i;
int count=0;
vector<pair<int,float>>pq;
for(i=0;i<n;i++)
{
int a=points[i][0];
int b=points[i][1];
int dis=(a*a)+(b*b);
float distance=sqrt(dis);
pq.push_back({i,distance});
}
sort(pq.begin(),pq.end(),compare);
for(i=0;i<pq.size();i++)
{
count=count+1;
answer.push_back({points[pq[i].first]});
if(count==k)
{break;}
}
return answer;
    }
};