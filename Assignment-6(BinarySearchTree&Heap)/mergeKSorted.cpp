#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(NULL) {}
    ListNode(int x) : val(x), next(NULL) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists){
        priority_queue, greater> minh;
        for(int i = 0; i < lists.size(); i++)
        {
            ListNode* head = lists[i];
            while(head != NULL)
            {
                minh.push(head -> val);
                head = head -> next;
            }
        }
        ListNode* dummy = new ListNode(0);
        ListNode* head = dummy;
        while(!minh.empty())
        {
            head -> next = new ListNode(minh.top());
            minh.pop();
            head = head -> next;
        }
       return dummy -> next; 
    }
};

int main(){
    
}