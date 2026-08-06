class Solution {
public:
int evaluate_area(vector<int>&nums)
{
int i;
int n=nums.size();
int area;
int max_area=0;
vector<int>next_smaller(n,n);
vector<int>previous_smaller(n,-1);
stack<int>st;
st.push(0);
for(i=0;i<n;i++)
{
if(!st.empty()&&nums[st.top()]>nums[i])
{
while(!st.empty()&&nums[st.top()]>nums[i])
{
next_smaller[st.top()]=i;
st.pop();
}
}
st.push(i);
}
st.push(n-1);
for(i=n-2;i>=0;i--)
{
if(!st.empty()&&nums[st.top()]>nums[i])
{
while(!st.empty()&&nums[st.top()]>nums[i])
{
previous_smaller[st.top()]=i;
st.pop();
}
}
st.push(i);
}
for(i=0;i<n;i++)
{
area=(next_smaller[i]-previous_smaller[i]-1)*(nums[i]);
max_area=max(max_area,area);
}
return max_area;
}
    int maximalRectangle(vector<vector<char>>& matrix) {
int rows=matrix.size();
int columns=matrix[0].size();
if(rows==1&&columns==1)
{return matrix[0][0]-'0';}
int i;
int j;
int area;
int max_area=0;
for(i=0;i<rows;i++)
{vector<int>nums(columns,0);
for(j=0;j<columns;j++)
{
if(matrix[i][j]=='0')
{continue;}
int index=i;
int count=0;
while(index>=0)
{
if(matrix[index][j]=='1')
{count=count+1;}
else
{break;}
index=index-1;
}
nums[j]=count;
int aa=evaluate_area(nums);
max_area=max(max_area,aa);
}
}
return max_area;
    }
};