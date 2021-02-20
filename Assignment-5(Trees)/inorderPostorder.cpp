#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
        int data;
        TreeNode *left;
        TreeNode *right;
        TreeNode(){
            data = 0;
            left = NULL;
            right = NULL;
        }
        TreeNode(int data){
            this.data = data;
            this.left = NULL;
            this.right = NULL;
        }
};

vector<int> ans;
void inorder(TreeNode* root){
    if(root!=NULL){
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }
}
vector<int> inorderTraversal(TreeNode* root) {
    inorder(root);
    return ans;
}

void pre(TreeNode* root){
    if(root!=NULL){
        ans.push_back(root->val);
        pre(root->left);
        pre(root->right);
    }
}

vector<int> preorderTraversal(TreeNode* root) {
    pre(root);
    return ans;
}
