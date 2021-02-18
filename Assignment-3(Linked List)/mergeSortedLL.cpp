#include <bits/stdc++.h>
using namespace std;

class ListNode{
public:
    int data;
    ListNode *next;
    ListNode(int data){
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
    ListNode* head = NULL;
    head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    ListNode* head1 = NULL;
    head1 = new ListNode(2);
    head1->next = new ListNode(5);
    head1->next->next = new ListNode(8);
    head1->next->next->next = new ListNode(9);
    head1->next->next->next->next = new ListNode(15);
    ListNode* result = mergeLL(arr,2);
    printLL(result);
}