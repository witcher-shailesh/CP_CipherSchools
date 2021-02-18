#include <bits/stdc++.h>
using namespace std;

class ListNode{
public:
    int data;
    ListNode *next;
    ListNode(){
        data = 0;
        next = NULL;
    }
    ListNode(int data){
        this->data = data;
        this->next = NULL;
    }
};

ListNode* deleteDuplicates(ListNode* head) {
    if(head == NULL) return head;
    ListNode* dummy = new ListNode(0,head);
    ListNode *prev = dummy;
    while(head!=NULL){
        
        if(head->next!=NULL && head->val == head->next->val){
            while(head->next!=NULL && head->val == head->next->val){
                head = head->next;
            }
            prev->next = head->next;
        }else{
            prev = prev->next;
        }
        head = head->next;
    }
    return dummy->next;
}

ListNode* addAtHead(int val,head) {        
    node* newnode = new node(val);
    if(head==NULL){
        head=newnode;
    }else{
        newnode->next=head;
        head=newnode;
    }
    size++;
}

void print(ListNode* head){
    while(head!=NULL){
        cout<<head->val;
        head=head->next;
    }
}

int main(){
    ListNode* head = NULL;
    head = addAtHead(0,head);
    head = addAtHead(1,head);
    head = addAtHead(1,head);
    head = addAtHead(2,head);
    head = addAtHead(2,head);
    head = addAtHead(3,head);
    head = deleteDuplicates(head);
    print(head);
    
}