#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
        int data;
        TreeNode *left;
        TreeNode *right;
        TreeNode *next;
        TreeNode(){
            data = 0;
            left = NULL;
            right = NULL;
            next= NULL;
        }
        TreeNode(int data){
            this.data = data;
            this.left = NULL;
            this.right = NULL;
            this.next = NULL;
        }
};

TreeNode* connect(TreeNode* root) {
    if(!root) return NULL;
    queue<TreeNode*> q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
        TreeNode* temp = q.front();
        q.pop();
        if(temp==NULL){
            q.push(NULL);
            continue;
        }
        temp->next=q.front();
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    return root;
}

int main(){
    
}
