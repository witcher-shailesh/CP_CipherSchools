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

Node *findIntersectionHelper(Node *larger, Node *smaller, int difference){
    Node *ptr = larger, *qtr = smaller;
    for (int i = 0; i < difference; i++){
        if (ptr == NULL) return NULL;
        ptr = ptr->next;
    }
    while (ptr != NULL && qtr != NULL){
        if (ptr == qtr){
            return ptr;
        }
        ptr = ptr->next;
        qtr = qtr->next;
    }
    return NULL;
}
Node *findIntersection(Node *a, Node *b){
    if (a == NULL || b == NULL){
        return NULL;
    }
    int countA = getSize(a);
    int countB = getSize(b);
    int d = countA - countB;
    if (d >= 0){
        return findIntersectionHelper(a, b, d);
    }
    else{
        return findIntersectionHelper(b, a, -1 * d);
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
    head1 = new Node(6);
    head1->next = new Node(7);
    head1->next->next = new Node(8);
    head1->next->next->next = new Node(4);
    head1->next->next->next->next = new Node(5);
    cout<< findIntersection(head,head1)->data;
}