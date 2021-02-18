#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(){
        data = 0;
        next = NULL;
    }
    Node(int val){
        this->data = val;
        this->next = NULL;
    }
};

class StackLL{
    public:
    Node* head;
    StackLL(){
        head = NULL;
    }
    void pushStack(int val){
        Node* newnode = new Node(val);
        if(head == NULL){
            head = newnode;
        }else{
            newnode->next = head;
            head = newnode;
        }
    }
    void popStack(){
        if(head==NULL){
            return;
        }
        Node* temp = head;
        head=head->next;
        delete temp;
    }
    int topStack(){
        if(head==NULL) return 0;
        else return head->data;
    }

};

int main(){
    StackLL ll;
    ll.pushStack(10);
    ll.pushStack(20);
    ll.pushStack(30);
    ll.pushStack(40);
    ll.pushStack(50);
    cout<<ll.topStack()<<endl;
    ll.popStack();
    cout<<ll.topStack()<<endl;
    ll.popStack();
    cout<<ll.topStack()<<endl;
    ll.popStack();
    cout<<ll.topStack()<<endl;
    ll.popStack();
}