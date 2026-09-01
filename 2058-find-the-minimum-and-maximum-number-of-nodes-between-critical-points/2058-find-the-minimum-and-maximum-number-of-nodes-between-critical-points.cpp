/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
ListNode*temp=head;
vector<int>ans;
vector<int>answer;
int count=0;
while(temp!=nullptr){
answer.push_back(temp->val);
count=count+1;
temp=temp->next;
}      
if(count<=2)
{
return {-1,-1};
}
int i;
int counter=0;
vector<int>a;
for(i=1;i<answer.size()-1;i++)
{
if(((answer[i]>answer[i-1])&&(answer[i]>answer[i+1]))||((answer[i]<answer[i-1])&&(answer[i]<answer[i+1])))
{
counter++;
a.push_back(i);
}
}
if(a.size()==2){
return {a[1]-a[0],a[1]-a[0]};
}
if(a.size()<2){return {-1,-1};}
int j;
int maxi=INT_MIN;
int mini=INT_MAX;
maxi=max(maxi,a[a.size()-1]-a[0]);
for(int i=0;i<a.size()-1;i++){
mini=min(mini,a[i+1]-a[i]);
}
if(mini!=INT_MAX&&maxi!=INT_MIN)
return {mini,maxi};
return {-1,-1};
    }
};