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

int height(TreeNode* root,int x,int h=0){
    if(root==NULL) return -1;
    if(root->val == x) return h;
    int left = height(root->left,x,h+1);
    if(left!=-1){
        return left; 
    }
    int right = height(root->right,x,h+1);
    if(right!=-1){
        return right; 
    }
    return -1;
}

int parent(TreeNode* root,int x,int par){
    if(root==NULL) return -1;
    if(root->val == x) return par;
    int left = parent(root->left,x,root->val);
    if(left!=-1){
        return left; 
    }
    int right = parent(root->right,x,root->val);
    if(right!=-1){
        return right; 
    }
    return -1;
}

bool isCousins(TreeNode* root, int x, int y) {
    // cout<<<<" ,"<<<<endl;
    // cout<<parent(root,x,root->val)<<" ,"<<;
    if(height(root,x) == height(root,y) && parent(root,x,root->val) != parent(root,y,root->val)){
        return true;
    }
    return false;
}

int main(){
    
}