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

vector<int> rightSideView(TreeNode* root) {
    vector<int> ans;
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
            int si = t.size();
            ans.push_back(t[si-1]);
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
    int si = t.size();
    ans.push_back(t[si-1]);
    return ans;
}

int main(){

}