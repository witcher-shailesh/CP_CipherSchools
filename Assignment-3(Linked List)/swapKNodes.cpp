#include <bits/stdc++.h> 
using namespace std; 

class Node{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
  
void push( Node** refHead, int dataVal) 
{ 
    Node* new_node = new Node(dataVal); 
    new_node->data = dataVal; 
    new_node->next = (*refHead); 
    (*refHead) = new_node; 
} 

void print( Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data << " "; 
        node = node->next; 
    } 
    cout << endl; 
} 
  
int countNodes( Node* s) 
{ 
    int count = 0; 
    while (s != NULL) { 
        count++; 
        s = s->next; 
    } 
    return count; 
} 

void swapKnodes( Node** refHead, int k) 
{ 
    int n = countNodes(*refHead); 
    if (n < k) return; 

    if (2 * k - 1 == n) return; 
    Node* x = *refHead; 
    Node* prevX = NULL; 
    for (int i = 1; i < k; i++) { 
        prevX = x; 
        x = x->next; 
    } 
  
    Node* y = *refHead; 
    Node* prevY = NULL; 
    for (int i = 1; i < n - k + 1; i++) { 
        prevY = y; 
        y = y->next; 
    } 
    if (prevX) prevX->next = y; 

    if (prevY)  prevY->next = x;  
    Node* temp = x->next; 
    x->next = y->next; 
    y->next = temp;  
    if (k == 1) 
        *refHead = y; 
    if (k == n) 
        *refHead = x; 
} 
  
int main() 
{ 
    Node* head = NULL; 
    for (int i = 8; i >= 1; i--) push(&head, i); 
    for (int k = 1; k < 9; k++) { 
        swapKnodes(&head, k);  
        print(head); 
    } 
    return 0; 
} 