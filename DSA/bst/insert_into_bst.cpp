#include <bits/stdc++.h>
using namespace std;
struct TreeNode{int val;TreeNode*left,*right;TreeNode(int v):val(v),left(NULL),right(NULL){} };
TreeNode* insertIntoBST(TreeNode*root,int val){ if(!root) return new TreeNode(val); if(val<root->val) root->left=insertIntoBST(root->left,val); else root->right=insertIntoBST(root->right,val); return root; }
int main(){ TreeNode*root=new TreeNode(4); root->left=new TreeNode(2); root->right=new TreeNode(7); insertIntoBST(root,5); cout<<root->right->left->val; }