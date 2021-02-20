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

vector<vector<int>> spiralLevel(TreeNode* root) {  
    vector<int> v;
    vector<vector<int>> ans;
    if(root==NULL) return  ans;
    queue<TreeNode*> q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
        TreeNode* temp = q.front();
        q.pop();
        if(temp==NULL){
            q.push(NULL);
            ans.push_back(v);
            v.clear();
            continue;
        }
        v.push_back(temp->val);
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
    }
    ans.push_back(v);
    for(int i =0;i<ans.size();i++){
        if(i%2!=0) reverse(ans[i].begin(),ans[i].end());
    }
    return ans;
}

int main(){
    
}