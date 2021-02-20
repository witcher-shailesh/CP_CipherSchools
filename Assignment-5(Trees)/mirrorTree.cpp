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

bool isSymmetric(TreeNode* root) {
    return checkSymm(root->left, root->right);
}

bool checkSymm(TreeNode* p, TreeNode* q){
    if(!p && !q) return true; 
    if(!p || !q || p->val != q->val) return false;
    return checkSymm(p->left, q->right) && checkSymm(p->right, q->left);
}

int main(){

}