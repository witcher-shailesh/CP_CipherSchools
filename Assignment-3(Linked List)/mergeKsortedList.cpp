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


Node* SortedMerge(Node* a, Node* b)
{
    Node* result = NULL;
    if (a == NULL) return (b);
    else if (b == NULL) return (a);
    if (a->data <= b->data) {
        result = a;
        result->next = SortedMerge(a->next, b);
    }
    else {
        result = b;
        result->next = SortedMerge(a, b->next);
    }
 
    return result;
}
Node* mergeKLists(Node* arr[], int last){
    while (last != 0) {
        int i = 0, j = last;
        while (i < j) {
            arr[i] = SortedMerge(arr[i], arr[j]);
            i++, j--;
            if (i >= j) last = j;
        }
    }
    return arr[0];
}

void printLL(Node* head){
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
    cout << "\n";
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
    Node* head2 = NULL;
    head2 = new Node(61);
    head2->next = new Node(7);
    head2->next->next = new Node(9);
    head2->next->next->next = new Node(1);
    head2->next->next->next->next = new Node(2);
    Node* arr[]={head,head1,head2};
    Node* result = mergeKLists(arr,2);
    printLL(result);
}