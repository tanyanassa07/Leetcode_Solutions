class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
int n=piles.size();
int i;
priority_queue<int,vector<int>>q;
for(i=0;i<n;i++){
q.push(piles[i]);
} 
int count=0;
while(count!=k){
count=count+1;
auto it=q.top();
q.pop();
q.push(ceil(it/2.0));
}     
int sum=0;
while(!q.empty()){
sum=sum+q.top();
q.pop();
}
return sum;
    }
};