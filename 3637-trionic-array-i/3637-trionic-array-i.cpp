class Solution {
public:
    bool isTrionic(vector<int>& nums) {
int n=nums.size();
int i;
int count1=0;
int count2=0;
int count3=0;
int j;
int k;
for(i=0;i<n-1;i++)
{
if(nums[i]<nums[i+1])
{count1=count1+1;}
else{break;}
}     
if(count1==0)
{return false;}
for(j=i;j<n-1;j++){
if(nums[j]>nums[j+1])
{count2=count2+1;}
else{break;}
}
if(count2==0){
return false;
}
for(k=j;k<n-1;k++){
if(nums[k]<nums[k+1]){
++count3;}
else{break;}
}
if(count3==0){
return false;}
if(k==n-1)
{return true;}
return false;
    }
};