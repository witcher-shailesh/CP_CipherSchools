#include <bits/stdc++.h>
using namespace std;

class Node{
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

Node* findIntersection(Node* head1, Node* head2)
{
    Node* dummy = new Node(0);
    Node* curr = dummy;
    while(head1!=NULL && head2!=NULL){
        if(head1->data == head2->data){
            curr->next = head1;
            curr= curr->next;
            head1=head1->next;
            head2= head2->next;
        }else if(head1->data > head2->data){
            head2=head2->next;
        }else{
            head1=head1->next;
        }
    }
    return dummy->next;
}