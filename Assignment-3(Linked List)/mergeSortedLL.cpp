#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

ListNode* mergeLL(ListNode* A,ListNode* B){
    if(A == NULL){
        return B;
    }else if(B == NULL){
        return A;
    }
    else{
        ListNode *p,*q;
        while(A!=NULL && B!=NULL){
            p = A->next;
            q = B->next;
            A->next = B;
            A = p ;
            B->next = A;
            B= q;
        }
    }
    return A;
}

void print(ListNode* head){
    while(head!=NULL){
        cout<<head->val;
        head=head->next;
    }
}

int main(){
    Node* head = NULL;
    head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    Node* head1 = NULL;
    head1 = new Node(2);
    head1->next = new Node(5);
    head1->next->next = new Node(8);
    head1->next->next->next = new Node(9);
    head1->next->next->next->next = new Node(15);
    Node* result = mergeLL(arr,2);
    printLL(result);
}