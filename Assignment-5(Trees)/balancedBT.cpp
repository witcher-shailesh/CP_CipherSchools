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

int heightH(TreeNode* root){
    if(root==NULL) return 0;
    return 1+max(heightH(root->left),heightH(root->right));
}

bool isBalanced(TreeNode* root) {
    if(root==NULL) return true;
    int left = heightH(root->left);
    int right = heightH(root->right);
    if(abs(left-right)<=1){
        return (isBalanced(root->left) && isBalanced(root->right));
    }else{
        return false;
    }
    //return (abs(left-right)<=1 | isBalanced(root->left) | isBalanced(root->right));
}

int main(){
    
}