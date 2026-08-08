class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
int n=words.size();
int i;
vector<int>indexes;
string word;
int j;
for(i=0;i<n;i++)
{
word=words[i];
int n1=word.length();
for(j=0;j<n1;j++)
{
if(word[j]==x)
{
indexes.push_back(i);
break;
}
}
}
return indexes;      
    }
};