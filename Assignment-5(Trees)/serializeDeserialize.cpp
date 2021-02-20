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


string serialize(TreeNode* root) {
    if (!root) return "#";
    
    return to_string(root->val) + " " + serialize(root->left) + " " + serialize(root->right);
    
}

TreeNode* deserialize(string data) {
    istringstream iss (data);
    return deserialized(iss);
}

TreeNode* deserialized(istringstream& iss) {
    string token;
    getline(iss, token, ' ');
    if(token == "#")
        return NULL;
    TreeNode* newNode = new TreeNode(std::stoi(token));
    newNode->left = deserialized(iss);
    newNode->right = deserialized(iss);
    return newNode;
}