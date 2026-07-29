#include <bits/stdc++.h>
using namespace std;
struct TreeNode{int val;TreeNode*left,*right;TreeNode(int v):val(v),left(NULL),right(NULL){} };
TreeNode* lca(TreeNode*root,TreeNode*p,TreeNode*q){ if(!root||root==p||root==q) return root; TreeNode*left=lca(root->left,p,q); TreeNode*right=lca(root->right,p,q); return left? (right? root:left):right; }
int main(){ TreeNode*root=new TreeNode(3); root->left=new TreeNode(5); root->right=new TreeNode(1); root->left->left=new TreeNode(6); root->left->right=new TreeNode(2); TreeNode*res=lca(root,root->left,root->right); cout<<res->val; }