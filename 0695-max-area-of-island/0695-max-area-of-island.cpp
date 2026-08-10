class Solution {
public:
bool Check(int start,int end,vector<vector<int>>&grid,int m,int n){
if(start>=0 && start<m && end>=0 && end<n && grid[start][end]==1)
{return true;}
return false;
}
void dfs(int start,int end,vector<vector<int>>&grid,int m,int n,int &count1){
grid[start][end]=0;
if(Check(start+1,end,grid,m,n))
{
dfs(start+1,end,grid,m,n,count1=count1+1);
}
if(Check(start,end+1,grid,m,n))
{
dfs(start,end+1,grid,m,n,count1=count1+1);
}
if(Check(start-1,end,grid,m,n))
{
dfs(start-1,end,grid,m,n,count1=count1+1);
}
if(Check(start,end-1,grid,m,n))
{
dfs(start,end-1,grid,m,n,count1=count1+1);
}
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
int max_count=0;
int count=0;
int m=grid.size();
int n=grid[0].size();
int i;
int j;
for(i=0;i<m;i++){
for(j=0;j<n;j++){
if(grid[i][j]==1)
{
int count1=1;
dfs(i,j,grid,m,n,count1);
max_count=max(max_count,count1);
}
}
}
return max_count;    
    }
};