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

TreeNode* sortedArrayToBSTHelper(vector<int>& nums,int start,int end){
    if(start>end){
        return NULL;
    }
    int mid = start + (end-start)/2;
    TreeNode* newNode = new TreeNode(nums[mid]);
    newNode->left = sortedArrayToBSTHelper(nums,start,mid-1);
    newNode->right = sortedArrayToBSTHelper(nums,mid+1,end);
    return newNode;
}

TreeNode* sortedArrayToBST(vector<int>& nums) {
    int start = 0, end = nums.size()-1;
    return sortedArrayToBSTHelper(nums,start,end);
}

int main(){
    vector<int> arr = {-10,-3,0,5,9};
    TreeNode* head = sortedArrayToBST(arr);
}