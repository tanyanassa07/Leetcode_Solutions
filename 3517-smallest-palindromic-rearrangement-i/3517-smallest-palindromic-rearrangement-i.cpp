class Solution {
public:
    string smallestPalindrome(string s) {
if(s.length()<=1){
return s;
}
int n=s.length();
string s1(n,' ');
int i;
priority_queue<char,vector<char>,greater<char>>pq;
for(i=0;i<n;i++)
{
pq.push(s[i]);
}     
int k=0;
int m=n-1;
while(!pq.empty())
{
char c1=pq.top();
pq.pop();
if(pq.empty())
{
s1[k]=c1;
break;
}
if(!pq.empty()&&c1!=pq.top())
{
int index=n/2;
s1[index]=c1;
continue;
}
char c2=pq.top();
pq.pop();
s1[k]=c1;
s1[m]=c2;
k=k+1;
m=m-1;
}
return s1;
    }
};