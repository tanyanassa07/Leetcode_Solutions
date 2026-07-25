class Solution {
public:
    int maxProduct(int n) {
vector<int>digits;
while(n!=0)
{
digits.push_back(n%10); 
n=n/10;
}  
int product=INT_MIN;
int i;
int j;
int n1=digits.size();
for(i=0;i<n1;i++){
for(j=i+1;j<n1;j++){
product=max(product,digits[i]*digits[j]);
}
}
return product;
    }
};