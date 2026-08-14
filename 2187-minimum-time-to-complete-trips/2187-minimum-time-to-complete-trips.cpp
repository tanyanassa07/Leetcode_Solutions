class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
int mini=INT_MAX;
int n=time.size();
long long answer=0;
for(int i=0;i<n;i++){
mini=min(mini,time[i]);
}     
long long low=1;
long long high=1LL*mini*totalTrips;
long long mid;
while(low<=high)
{
mid=low+(high-low)/2;
long long total=0;
for(int i=0;i<n;i++)
{
total+=mid/time[i];
}
if(total>=totalTrips)
{answer=mid;high=mid-1;}
else
{low=mid+1;}
}
return answer;
    }
};