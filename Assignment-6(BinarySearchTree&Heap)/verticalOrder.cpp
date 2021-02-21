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

class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        vector<vector<int>> v;
        if(root==NULL) return v;
        map<int,vector<int>> mp;
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            TreeNode* temp = it.first;
            int index = it.second;
            mp[index].push_back(temp->val);
            if(temp->left!=NULL){
                q.push({temp->left,index-1});
            }
            if(temp->right!=NULL){
                q.push({temp->right,index+1});
            }
        }
        for(auto it :mp){
            v.push_back(it.second);
        }
        
        return v;
    }
};

int main(){

}