#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(NULL), right(NULL) {}
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int ans =0,count=0;
    void inOrder(TreeNode* root, int k){
        if(root!=NULL){
            inOrder(root->left,k);
            count++;
            if(k==count){
                ans = root->val;
                return;
            } 
            inOrder(root->right,k);
        }
    }
    
    int kthSmallest(TreeNode* root, int k) {
        inOrder(root,k);
        return ans;
    }
};