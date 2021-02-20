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

void post(TreeNode* root){
    if(root!=NULL){
        post(root->left);
        post(root->right);
        ans.push_back(root->val);
    }
}
vector<int> postorderTraversal(TreeNode* root) {
    post(root);
    return ans;
}

vector<vector<int>> levelOrder(TreeNode* root) {
        
    vector<vector<int>> ans;
    if(root==NULL){
        return ans;
    }
    vector<int> t;
    queue<TreeNode*> q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
        TreeNode* temp = q.front();
        q.pop();
        if(temp==NULL){
            q.push(NULL);
            ans.push_back(t);
            t.clear();
            continue;
        }
        t.push_back(temp->val);
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
    }
    ans.push_back(t);
    return ans;
}
int main(){
    
}