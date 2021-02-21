#include <iostream>
using namespace std;
 

struct Node {
    int data;
    Node *left, *right;
};
 
Node* newNode(int key)
{
    Node* node = new Node;
    node->data = key;
    node->left = node->right = nullptr;
 
    return node;
}

Node* insert(Node* root, int key)
{
   
    if (root == nullptr) {
        return newNode(key);
    }
    
    if (key < root->data) {
        root->left = insert(root->left, key);
    }
 
    else {
        root->right = insert(root->right, key);
    }
 
    return root;
}

Node* findMinimum(Node* root)
{
    while (root->left) {
        root = root->left;
    }
 
    return root;
}

void findSuccessor(Node* root, Node*& succ, int key)
{
    if (root == nullptr) {
        succ = nullptr;
        return;
    }
    if (root->data == key)
    {
        if (root->right) {
            succ = findMinimum(root->right);
        }
    }
    else if (key < root->data)
    {
        succ = root;
        findSuccessor(root->left, succ, key);
    }
    else {
        findSuccessor(root->right, succ, key);
    }
}
 
int main()
{
    int keys[] = { 15, 10, 20, 8, 12, 16, 25 };
    Node* root = nullptr;
    for (int key: keys) {
        root = insert(root, key);
    }
    for (int key: keys)
    {
        Node* prec = nullptr;
        findSuccessor(root, prec, key);
 
        if (prec != nullptr) {
            cout << prec->data;
        }
        else {
            cout  << key;
        }
        cout << '\n';
    }
    return 0;
}