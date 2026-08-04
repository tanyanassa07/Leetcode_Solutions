class Solution {
public:
    int totalMoney(int n) {
int sum=0;
unordered_set<int>st;
int i=0;
while(i!=1000)
{
st.insert((i*7)+1);
if((i*7)+1>1000)
{break;}
i=i+1;
}
int count=1;
int count1;
int number=0;
while(n+1!=count)
{
if(st.find(count)!=st.end())
{
count1=0;
if(number==0)
{number=1;}
else{
number=number+1;
}
sum=sum+number;
}
else{
count1=count1+1;
sum=sum+count1+number;
}
count=count+1;
}
return sum;    
    }
};