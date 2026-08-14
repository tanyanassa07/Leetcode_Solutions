class Solution {
public:
    int maximumLengthSubstring(string s) {
int k=2;
int count=INT_MIN;
int n=s.length();
int low=0;
int high=0;
unordered_map<int,int>mpp;
while(high<n)
{
mpp[s[high]]++;
while(mpp[s[high]]>k)
{
mpp[s[low]]--;
low=low+1;
}
count=max(count,(high-low+1));
high=high+1;
}   
return count;
    }
};