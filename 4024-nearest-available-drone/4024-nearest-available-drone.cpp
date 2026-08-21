class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
int index=-1;
int n=drones.size();
int i;
int dis=INT_MAX;
for(i=0;i<n;i++)
{
int x=drones[i][0];
int y=drones[i][1];
int range=drones[i][2];
int distance=abs(x-target[0])+abs(y-target[1]);
if(distance>range)
{continue;}
if(distance<dis)
{
dis=distance;
index=i;
}
if(distance==dis)
{
index=min(index,i);
}
}
return index;
    }
};