class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
sort(g.begin(),g.end());
sort(s.begin(),s.end());
int count=0;
int i=0;
int j=0;
int n1=g.size();
int n2=s.size();
while(i<n1&&j<n2)
{if(s[j]>=g[i])
{count=count+1;
j=j+1;
i=i+1;}
else{j=j+1;}
}   
return count;   
    }
};