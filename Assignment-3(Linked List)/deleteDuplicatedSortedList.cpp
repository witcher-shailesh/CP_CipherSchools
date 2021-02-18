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

ListNode* deleteDuplicates(ListNode* head) {
    if(head == NULL) return head;
    ListNode* curr = head;
    while(curr->next!=NULL){
        if(curr->val == curr->next->val){
            curr->next=curr->next->next; 
        }else{
            curr= curr->next;
        }
    }
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

int main(){
    int main()
{
    ListNode* head = NULL;
    head = addAtHead(1,head);
    head = addAtHead(1,head);
    head = addAtHead(1,head);
    head = addAtHead(2,head);
    head = addAtHead(2,head);
    head = deleteDuplicates(head);
    print(head);
}
}