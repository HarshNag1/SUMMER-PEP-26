#include <bits/stdc++.h>
using namespace std;
struct TreeNode{int val;TreeNode*left,*right;TreeNode(int v):val(v),left(NULL),right(NULL){} };
TreeNode* minimum(TreeNode*node){ return node->left?minimum(node->left):node; }
TreeNode* deleteNode(TreeNode*root,int key){ if(!root) return NULL; if(key<root->val) root->left=deleteNode(root->left,key); else if(key>root->val) root->right=deleteNode(root->right,key); else{ if(!root->left) return root->right; if(!root->right) return root->left; TreeNode*minNode=minimum(root->right); root->val=minNode->val; root->right=deleteNode(root->right,minNode->val); } return root; }
int main(){ TreeNode*root=new TreeNode(5); root->left=new TreeNode(3); root->right=new TreeNode(6); root=deleteNode(root,3); cout<<root->left; }