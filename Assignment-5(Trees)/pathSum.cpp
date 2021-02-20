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

bool hasPathSum(TreeNode* root, int sum,int check = 0) {
    if(root==NULL){
        return false;
    }
    check += root->val;
    if(check == sum && root->left==NULL && root->right==NULL){
        return true;
    }
    if(check != sum && root->left==NULL && root->right==NULL){
        return false;
    }
    return hasPathSum(root->left , sum, check)|hasPathSum(root->right , sum, check);
}

int main(){

}