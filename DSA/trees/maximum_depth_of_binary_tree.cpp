#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
  int val;
  TreeNode *left, *right;
  TreeNode(int v) : val(v), left(NULL), right(NULL) {}
};
int depth(TreeNode* node) {
  return node ? 1 + max(depth(node->left), depth(node->right)) : 0;
}
int main() {
  TreeNode* root = new TreeNode(3);
  root->left = new TreeNode(9);
  root->right = new TreeNode(20);
  root->right->left = new TreeNode(15);
  root->right->right = new TreeNode(7);
  cout << depth(root);
}