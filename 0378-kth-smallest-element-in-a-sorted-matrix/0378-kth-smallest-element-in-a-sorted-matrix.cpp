class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
priority_queue<int,vector<int>,greater<int>>pq;
int m=matrix.size();
int i=0;
int j=0;
for(i=0;i<m;i++)
{
for(j=0;j<matrix[0].size();j++)
{
pq.push(matrix[i][j]);
}
}  
int count=0; 
int answer; 
while(!pq.empty())
{
count=count+1;
if(count==k)
{answer=pq.top();
break;}
pq.pop();
}  
return answer;
    }
};