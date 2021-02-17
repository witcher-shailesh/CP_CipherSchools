#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        Node(0);
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class MyLinkedList
{
public:
    Node *head;
    MyLinkedList()
    {
        this->head = NULL;
    }

    void insertAtBeginning(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void insertAtEnd(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }
    }

    void printList()
    {
        Node *ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->data << "->";
            ptr = ptr->next;
        }
        cout << "\n";
    }

    bool ifPalindrome(Node **start, Node *head){
        if(head==NULL){
            return true;
        }
        int check = ifPalindrome(start,head->next);
        if(check == false) return false;
        bool checlLR = (*start)->data == head->data;
        *left = (*left)->next;
        return checkLR;
    }

    bool checkPalindrome(Node **start, Node *head){
        return ifPalindrome(&head,head);
    }
};

int main()
{
    MyLinkedList sll;
    for (int i = 5; i >= 1; i--)
        sll.insertAtBeginning(i);
    sll.printList();
    sll.checkPalindrome();
    sll.printList();
}