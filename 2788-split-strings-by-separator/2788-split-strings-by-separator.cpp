class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
vector<string>answer;
char ch=separator;
int n=words.size();
int i;
for(i=0;i<n;i++)
{
string s=words[i];
stringstream ss(s);
string word;
while(getline(ss,word,ch))
{if(!word.empty())answer.push_back(word);}
}   
return answer;
    }
};