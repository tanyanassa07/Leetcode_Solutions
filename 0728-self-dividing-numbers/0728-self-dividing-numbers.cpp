class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
vector<int>answer;
int i;
for(i=left;i<=right;i++)
{
int number=i;
int no=i;
while(no!=0)
{
int digit=no%10;
if(digit==0)
{break;}
if(number%digit!=0)
{break;}
no=no/10;
}
if(no==0)
{answer.push_back(number);}
}
return answer;      
    }
};