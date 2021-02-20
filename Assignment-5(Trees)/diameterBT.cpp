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


int ans=0;
int height(TreeNode* root){
    if(root==NULL) return 0;
    int left = height(root->left);
    int right = height(root->right);
    ans = max(ans,left+right);
    return max(left,right)+1;
}

int diameterOfBinaryTree(TreeNode* root) {
    //if(root->left==NULL && root->right == NULL) return 0;
    int temp = height(root);
    return ans;
}

int main(){
    
}