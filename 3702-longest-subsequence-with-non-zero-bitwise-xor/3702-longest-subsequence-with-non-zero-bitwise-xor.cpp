class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
int n=nums.size();
if(nums.size()==1)
{if(nums[0]!=0)
{return 1;}
else{
return 0;
}
}
int i;
if(nums[0]==0)
{for(i=1;i<nums.size();i++)
{
if(nums[i]==0)
{}
else{break;}
}
if(i==nums.size())
{return 0;}
}
int answer=nums[0]^nums[1];
for(i=2;i<nums.size();i++)
{
answer=answer^nums[i];}
if(answer!=0)
{return nums.size();}

if(answer==0)
{return nums.size()-1;}
int val=nums[0];
for(i=1;i<nums.size();i++)
{
if(nums[i]!=val)
{break;}
else{}
}
if(val==0&&i==nums.size())
{return 0;}
if(i==nums.size()&&nums.size()%2!=0)
{return nums.size();}
if(i==nums.size()&&nums.size()%2==0)
{return nums.size()-1;}
int count=0;
for(i=0;i<n-1;i++)
{
int zor=nums[i]^nums[i+1];
if(zor!=0)
{count=2;break;}
}
if(i==n-1)
{return 1;}
int value=nums[i]^nums[i+1];
for(int j=i+2;j<n;j++)
{
if((value^nums[j])==0)
{if(j<n-1&&(value^nums[j]^nums[j+1])!=0)
{count++;}
else{continue;}
}
else{
count++;
value^=nums[j];
}
} 
return count;  
    }
};