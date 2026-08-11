class Solution {
public:
    int getLeastFrequentDigit(int n) {
int freq[10]={0};
while(n!=0)
{
int digit=n%10;
n=n/10;
freq[digit]++;
}       
int i;
int frequency=INT_MAX;
int value;
for(i=0;i<=9;i++)
{
if(freq[i]!=0)
{
if(freq[i]==frequency)
{
value=min(value,i);
}
if(freq[i]<frequency)
{
frequency=freq[i];
value=i;
}
}
}
return value;
    }
};