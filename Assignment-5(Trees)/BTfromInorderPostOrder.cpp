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

int postOr=0;  
TreeNode* solve(vector<int>& inorder, vector<int>& postorder,int start,int end){
    if(start>end) return NULL;
    cout<<postOr<<" ";
    TreeNode* temp = new TreeNode(postorder[postOr--]);
    cout<<temp->val<<",";
    int inOr = 0;
    for(int i =0;i<=end;i++){
        if(inorder[i]==temp->val){
            inOr = i;
            break;
        }
    }
    temp->right = solve(inorder,postorder,inOr+1,end);
    temp->left = solve(inorder,postorder,start,inOr-1);
    return temp;
}

TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
    int size = inorder.size()-1;
    postOr = size;
    return solve(inorder,postorder,0,size);
}

int main(){
    
}