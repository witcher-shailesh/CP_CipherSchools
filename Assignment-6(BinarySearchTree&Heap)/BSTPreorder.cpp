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

int index(vector<int> a,int key,int start,int end){
    start=0;
    while(start<=end){
        if(a[start]==key){
            return start;
        }
        start++;
    }
    return -1;
}    

TreeNode* bstFromPreorderHelper(vector<int> preorder, vector<int> inorder, int start, int end,int &indexPre){
    if(start>end){
        return NULL;
    }
    if(indexPre == preorder.size()){
        return NULL;
    }
    int inOrderIndex = index(inorder,preorder[indexPre],start,end);
    TreeNode* newNode = new TreeNode(preorder[indexPre++]);
    newNode->left = bstFromPreorderHelper(preorder,inorder,start,inOrderIndex-1, indexPre);
    newNode->right = bstFromPreorderHelper(preorder,inorder,inOrderIndex+1 ,end, indexPre);
    return newNode;
}

TreeNode* bstFromPreorder(vector<int>& preorder) {
    vector<int> inorder = preorder;
    sort(inorder.begin(),inorder.end());
    int index = 0;
    TreeNode *ans = bstFromPreorderHelper(preorder,inorder,0,preorder.size()-1,index);
    return ans;
}