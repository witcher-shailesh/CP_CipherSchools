#include<bits/stdc++.h>
using namespace std;
class TreeNode{
   public:
      int data;
      TreeNode *left;
      TreeNode *right;
};
void nodesInRange(TreeNode *root, int k1, int k2){
   if ( NULL == root )
      return;
   if ( k1 < root->data )
      nodesInRange(root->left, k1, k2);
   if ( k1 <= root->data && k2 >= root->data )
      cout<<root->data<<"\t";
   if ( k2 > root->data )
      nodesInRange(root->right, k1, k2);
}
TreeNode* insert(int data){
   TreeNode *temp = new TreeNode();
   temp->data = data;
   temp->left = NULL;
   temp->right = NULL;
   return temp;
}
int main(){
   TreeNode *root = new TreeNode();
   int k1 = 12, k2 = 25;
   root = insert(20);
   root->left = insert(10);
   root->right = insert(24);
   root->left->left = insert(8);
   root->left->right = insert(15);
   root->right->right = insert(32);
   cout<<”The values of TreeNode within the range are\t”;
   nodesInRange(root, k1, k2);
   return 0;
}