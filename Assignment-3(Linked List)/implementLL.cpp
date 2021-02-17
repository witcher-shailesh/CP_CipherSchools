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

class MyLinkedList {
public:
    Node *head = NULL;
    int size;
    MyLinkedList() {
        head=NULL;
        size=0;
    }
    int get(int index) {
        if(head==NULL){
            return -1;
        }
        node* curr =head;
        while(curr->next!=NULL && index!=0){
            curr=curr->next;
            index--;
        }
        if(index==0){
            return curr->data;
        }else{
            return -1;
        }
    }
    void addAtHead(int val) {        
        node* newnode = new node(val);
        if(head==NULL){
            head=newnode;
        }else{
            newnode->next=head;
            head=newnode;
        }
        size++;
    }
    void addAtTail(int val) {
        node* newnode = new node(val);
        if(head==NULL){
            head=newnode;
        }else{
            node* curr = head;
            while(curr->next!=NULL){
                curr=curr->next;
            }
            curr->next=newnode;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {//0,10  0,20 1,30
        node* newnode = new node(val);
        if(head==NULL && index!=0){
            return;
        }
        if(head==NULL && index==0){
            head=newnode;
            size++;
            return;
        }
        if(index==0){
            newnode->next=head;
            head=newnode;
            size++;
            return;
        }
        index--;
        node* curr =head;
        while(curr->next!=NULL && index!=0){
            curr=curr->next;
            index--;
        }
        if(index>0){
            return;
        }else{
            node* next = curr->next;
            curr->next=newnode;
            newnode->next=next;
            size++;
        }
    }
    void deleteAtIndex(int index) {
        if(index>=size){
            return;
        }
        node* curr = head;
        if(index==0){
            head=head->next;
            delete curr;
            size--;
            return;
        }
        
        index--;
        if(index==0 && curr->next==NULL){
            return;
        }
        while(curr->next!=NULL && index!=0){
            curr=curr->next;
            index--;
        }
        if(index>0){
            return;
        }else{
            node* ex = curr->next;
            curr->next=ex->next;
            delete ex;
            size--;
        }

    }
    void printLL()
    {
        Node *ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->data << "->";
            ptr = ptr->next;
        }
        cout << "\n";
    }
};

int main()
{
    MyLinkedList linkedList;
    linkedList.printLL();
    for (int i = 1; i <= 10; i++)
    {
        linkedList.addAtHead(i);  
    }
    linkedList.printLL();
}