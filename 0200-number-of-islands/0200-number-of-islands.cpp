class Solution {
public:
bool Check(int start,int end,vector<vector<char>>&grid,int m,int n)
{
if(start>=0 && start<m && end>=0 && end<n && grid[start][end]=='1')
{return true;}
return false;
}
void dfs(int start,int end,vector<vector<char>>&grid,int m,int n)
{
grid[start][end]='0';
if(Check(start+1,end,grid,m,n))
{
dfs(start+1,end,grid,m,n);
}
if(Check(start,end-1,grid,m,n))
{
dfs(start,end-1,grid,m,n);
}
if(Check(start,end+1,grid,m,n))
{
dfs(start,end+1,grid,m,n);
}
if(Check(start-1,end,grid,m,n))
{
dfs(start-1,end,grid,m,n);
}
}
    int numIslands(vector<vector<char>>& grid) {
int count=0;
int m=grid.size();
int n=grid[0].size();
int i;
int j;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(grid[i][j]=='1')
{
count=count+1;
dfs(i,j,grid,m,n);
}
}
}
return count;
    }
};