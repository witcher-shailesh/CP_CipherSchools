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

int preindex=0;
    
TreeNode* fill(vector<int>& preorder, vector<int>& inorder,int start,int end){
    if(start>end) return NULL;
    TreeNode* temp = new TreeNode(preorder[preindex++]);
    int inindex =0;

    for(int i =0;i<=end;i++){
        if(inorder[i]==temp->val){
            inindex=i;
            break;
        }
    }
    temp->left = fill(preorder,inorder,start,inindex-1);
    temp->right = fill(preorder,inorder,inindex+1,end);
    return temp;
}

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder ) {
    int end = preorder.size()-1;
    
    return fill(preorder,inorder,0,end);
}
int main(){
    
}