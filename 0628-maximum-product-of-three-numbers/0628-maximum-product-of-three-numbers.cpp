class Solution {
public:
    int maximumProduct(vector<int>& nums) {
int n=nums.size();
int mp=INT_MIN;
int product1=1;
int product2=1;
int i;
int max_product=INT_MIN;
priority_queue<int,vector<int>>p;
priority_queue<int,vector<int>,greater<int>>q;
for(i=0;i<n;i++)
{
if(nums[i]<0)
q.push(nums[i]);
p.push(nums[i]);
}
int k=3;
int count=0;
if(!p.empty()){
while(count!=k){
if(mp==INT_MIN)
{mp=p.top();}
count=count+1;
product1=product1*p.top();
p.pop();
}
} 
if(nums.size()==q.size()){return product1;}  
if(q.empty()){return product1;
}
else{
product2=product2*mp;
if(!q.empty())
{
if(product2==INT_MIN)
product2=INT_MIN;
else
product2=product2*q.top();
}
q.pop();
if(!q.empty())
{
if(product2==INT_MIN)
product2=INT_MIN;
else
product2=product2*q.top();
q.pop();}
if(p.empty()){return product2;
}
}
max_product=max(product1,product2);
return max_product;       
    }
};