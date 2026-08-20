class Solution {
public:
    int distributeCandies(vector<int>& candyType) 
{
unordered_map<int,int>mpp;
int n=candyType.size();  
int i;
for(i=0;i<n;i++)
{mpp[candyType[i]]++;}
if(mpp.size()>=(n/2))
{return n/2;}
return mpp.size();  
    }
};