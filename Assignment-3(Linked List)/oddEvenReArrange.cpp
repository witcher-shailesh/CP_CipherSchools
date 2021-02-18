#include <bits/stdc++.h>
using namespace std;

class ListNode{
public:
    int data;
    Node *next;
    Node(){
        data = 0;
        next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


ListNode* oddEvenList(ListNode* head) {
    if(head==NULL || head->next==NULL) return head;
    ListNode dummy;
    ListNode* ptr = head, *next = NULL , *prev = NULL;
    ListNode *even = &dummy;
    while(ptr!=NULL){
        prev = ptr;
        next = ptr->next;
        if(ptr->next!=NULL){
            ptr->next = next->next;
        }
        even->next = next;
        even=even->next;
        ptr = ptr->next;
    }
    prev->next = dummy.next;
    return head;
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

int main()
{
    ListNode* head = NULL;
    head = addAtHead(1,head);
    head = addAtHead(2,head);
    head = addAtHead(3,head);
    head = addAtHead(4,head);
    head = addAtHead(5,head);
    head = oddEvenList(head);
    print(head);
}