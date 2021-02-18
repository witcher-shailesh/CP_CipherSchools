#include <bits/stdc++.h> 
using namespace std; 
class Node  
{  
    public: 
    int data;  
    Node* next;  
};  

Node *reverseKNodes(Node *head, int k)  
{  
    Node* current = head;  
    Node* next;  
    Node* prev = NULL;  
    int count = 0;  
    while (current != NULL && count < k)  
    {  
        next = current->next;  
        current->next = prev;  
        prev = current;  
        current = next;  
        count++;  
    }  
    if(head != NULL)  
    head->next = current;  
    count = 0;  
    while(count < k-1 && current != NULL )  
    {  
        current = current->next;  
        count++;  
    }  
    if(current != NULL)  current->next = reverseKNodes(current->next, k); 
    return prev;  
}  
  
void push(Node** headRef, int dataVal)  
{  
    Node* new_node = new Node(); 
    new_node->data = dataVal;  
    new_node->next = (*headRef);     
    (*headRef) = new_node;  
}  
  
void printList(Node *node)  
{  
    int count = 0;  
    while(node != NULL)  
    {  
        cout<<node->data<<" ";  
        node = node->next;  
        count++;  
    }  
}  
  
int main(void)  
{  
    Node* head = NULL;  
    int i;  
    for(i = 20; i > 0; i--)  push(&head, i);   
    head = reverseKNodes(head, 3);  
    printList(head);  
    return(0);  
}  