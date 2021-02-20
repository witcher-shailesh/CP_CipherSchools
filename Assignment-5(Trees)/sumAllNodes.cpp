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
int sumBT(TreeNode* root) 
{
    if (root == NULL) 
        return 0; 
    return (root->key + sumBT(root->left) + sumBT(root->right)); 
} 

int main(){
    
}