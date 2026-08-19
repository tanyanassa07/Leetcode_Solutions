class Solution {
public:
struct comparator
{
bool operator ()(pair<int,int>a,pair<int,int>b)
{
return (a.second-a.first<b.second-b.first);
}
};
    int minimumEffort(vector<vector<int>>& tasks) {
int answer=0;
int energy=0;
priority_queue<pair<int,int>,vector<pair<int,int>>,comparator>pq;
int n=tasks.size();
int i;
for(i=0;i<n;i++)
{pq.push({tasks[i][0],tasks[i][1]});}
while(!pq.empty())
{
if(pq.top().second>energy)
{
int value=pq.top().second-energy;
energy+=value;
answer+=value;
}
energy=energy-pq.top().first;
pq.pop();}
return answer;
    }
};