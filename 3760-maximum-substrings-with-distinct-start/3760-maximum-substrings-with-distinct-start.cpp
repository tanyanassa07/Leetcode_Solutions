class Solution {
public:
    int maxDistinct(string s) {
int n=s.length();
int i;
set<int>st;
for(i=0;i<n;i++){
st.insert(s[i]);
}  
return st.size();
    }
};