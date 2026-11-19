class Solution {
public:
    int countLargestGroup(int n) {
int i;
unordered_map<int,int>mpp;
for(i=1;i<=n;i++)
{
int number=i;
int sum=0;
while(number!=0)
{
sum=sum+(number%10);
number=number/10;
}
mpp[sum]++;
}
int maxi=INT_MIN;
for(auto i : mpp)
{
maxi=max(maxi,i.second);
}
int maxii=0;
for(auto i : mpp)
{
if(i.second==maxi)
{maxii=maxii+1;}
}
return maxii;
    }
};