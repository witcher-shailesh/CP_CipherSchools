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

class MyLinkedList{
public:
    Node *head;
    MyLinkedList(){
        this->head = NULL;
    }

    void insertAtStart(int data){
        Node *newNode = new Node(data);
        if (head == NULL){
            head = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }
    void printList(){
        Node *ptr = head;
        while (ptr != NULL){
            cout << ptr->data << "->";
            ptr = ptr->next;
        }
        cout << "\n";
    }
};

Node *addTwo(Node *a, Node *b)
{
    if (a == NULL) return b;
    else if (b == NULL) return a;
    Node dummy;
    Node *result = &dummy, *ptr = a, *qtr = b;
    int remain = 0, sum = 0;
    while (ptr != NULL || qtr != NULL){
        sum = remain + (ptr != NULL ? ptr->data : 0) + (qtr != NULL ? qtr->data : 0);
        remain = sum / 10;
        sum %= 10;
        result->next = new Node(sum);
        result = result->next;

        if (ptr != NULL){
            ptr = ptr->next;
        }

        if (qtr != NULL){
            qtr = qtr->next;
        }
    }

    if (remain > 0){
        result->next = new Node(remain);
    }

    return dummy.next;
}

int main(){
    MyLinkedList a, b;
    for (int i = 1; i <= 9; i++){
        a.insertAtStart(i);
        b.insertAtStart(10 - i);
    }
    MyLinkedList c;
    c.head = addTwo(a.head, b.head);
    c.printList();
}