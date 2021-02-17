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

    void insertAtBeginning(int data){
        Node *newNode = new Node(data);
        if (head == NULL){
            head = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }

    bool isLoop(){
        if (head == NULL || head->next == NULL) return false;
        Node *first = head, *second = head;
        while (first != NULL && second != NULL && second->next != NULL){
            first = first->next;
            second = second->next->next;
            if (first == second)
                return true;
        }
        return false;
    }
    void rmLoop(){
        if (head == NULL || head->next == NULL) return;
        Node *first = head, *second = head;
        bool loopPresent = false;
        while (first != NULL && second != NULL && second->next != NULL){
            first = first->next;
            second = second->next->next;
            if (first == second){
                loopPresent = true;
                break;
            }
        }

        if (loopPresent){
            first = head;
            if (first == second){
                while (second->next != first){
                    second = second->next;
                }
            }
            else{
                while (first->next != second->next){
                    first = first->next;
                    second = second->next;
                }
            }
            second->next = NULL;
        }
    }
};

int main()
{
    MyLinkedList *linkedList = new MyLinkedList();
    linkedList->head = new Node(1);
    linkedList->head->next = new Node(2);
    linkedList->head->next->next = new Node(3);
    linkedList->head->next->next->next = new Node(4);
    linkedList->head->next->next->next->next = new Node(5);
    cout << linkedList->isLoop() << "\n";
    linkedList->head->next->next->next->next->next = linkedList->head;
    cout << linkedList->isLoop() << "\n";
    linkedList->rmLoop();
    cout << linkedList->isLoop() << "\n";
    linkedList->head->next->next->next->next->next = linkedList->head->next;
    cout << linkedList->isLoop() << "\n";
    linkedList->rmLoop();
    cout << linkedList->isLoop() << "\n";
}