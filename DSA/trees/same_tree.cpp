#include <bits/stdc++.h>
using namespace std;
struct TreeNode{int val;TreeNode*left,*right;TreeNode(int v):val(v),left(NULL),right(NULL){} };
bool isSame(TreeNode*a,TreeNode*b){ if(!a||!b) return a==b; return a->val==b->val && isSame(a->left,b->left) && isSame(a->right,b->right); }
int main(){ TreeNode*a=new TreeNode(1); a->left=new TreeNode(2); a->right=new TreeNode(3); TreeNode*b=new TreeNode(1); b->left=new TreeNode(2); b->right=new TreeNode(3); cout<<(isSame(a,b)?"true":"false"); }