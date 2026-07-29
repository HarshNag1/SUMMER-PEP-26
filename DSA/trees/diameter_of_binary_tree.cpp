#include <bits/stdc++.h>
using namespace std;
struct TreeNode{int val;TreeNode*left,*right;TreeNode(int v):val(v),left(NULL),right(NULL){} };
int best=0;
int dfs(TreeNode*node){ if(!node) return 0; int l=dfs(node->left),r=dfs(node->right); best=max(best,l+r); return 1+max(l,r); }
int main(){ TreeNode*root=new TreeNode(1); root->left=new TreeNode(2); root->right=new TreeNode(3); root->left->left=new TreeNode(4); root->left->right=new TreeNode(5); dfs(root); cout<<best; }