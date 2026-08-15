class Solution {
public:
bool static comparator(pair<int,int>a,pair<int,int>b){
if(a.second>b.second)
{return true;}
if(a.second==b.second){
if(a.first<b.first)
{return true;}
}
return false;
}
    vector<int> topStudents(vector<string>& positive_feedback, vector<string>& negative_feedback, vector<string>& report, vector<int>& student_id, int k) {
int n1=positive_feedback.size();
int n2=negative_feedback.size();
int i;
set<string>s1;
set<string>s2;
for(i=0;i<n1;i++)
s1.insert(positive_feedback[i]);
for(i=0;i<n2;i++)
s2.insert(negative_feedback[i]);
vector<int>answer;
int n=report.size();
vector<pair<int,int>>pq;
for(i=0;i<n;i++)
{
string s=report[i];
stringstream ss(s);
string word;
int ans=0;
while(ss>>word)
{
if(s1.find(word)!=s1.end())
{ans=ans+3;}
if(s2.find(word)!=s2.end())
{ans=ans-1;}
}
pq.push_back({student_id[i],ans});
} 
sort(pq.begin(),pq.end(),comparator); 
for(i=0;i<k;i++)
answer.push_back(pq[i].first);
return answer;
    }
};