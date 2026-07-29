#include <bits/stdc++.h>
using namespace std;
struct TreeNode{int val;TreeNode*left,*right;TreeNode(int v):val(v),left(NULL),right(NULL){} };
int main(){ TreeNode*root=new TreeNode(3); root->left=new TreeNode(1); root->right=new TreeNode(4); root->left->right=new TreeNode(2); stack<TreeNode*>st; TreeNode*cur=root; int k=1; while(cur||!st.empty()){ while(cur){ st.push(cur); cur=cur->left; } cur=st.top(); st.pop(); if(--k==0){ cout<<cur->val; return 0; } cur=cur->right; } }