class Solution {
public:
    int maxFreqSum(string s) {
int sum=0;
unordered_map<char,int>vowel;
unordered_map<char,int>consonant;
int i;
int n=s.length();
for(i=0;i<n;i++)
{
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
{vowel[s[i]]++;}
else
{consonant[s[i]]++;}
}
int maxiv=0;
int maxic=0;
for(auto i : vowel)
maxiv=max(maxiv,i.second);
for(auto i : consonant)
maxic=max(maxic,i.second);
sum=maxiv+maxic;
return sum;     
    }
};