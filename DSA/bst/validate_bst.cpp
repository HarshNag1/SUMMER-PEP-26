#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
  int val;
  TreeNode *left, *right;
  TreeNode(int v) : val(v), left(NULL), right(NULL) {}
};
bool validate(TreeNode* node, long long low, long long high) {
  if (!node) return true;
  if (node->val <= low || node->val >= high) return false;
  return validate(node->left, low, node->val) &&
         validate(node->right, node->val, high);
}
int main() {
  TreeNode* root = new TreeNode(2);
  root->left = new TreeNode(1);
  root->right = new TreeNode(3);
  cout << (validate(root, LLONG_MIN, LLONG_MAX) ? "true" : "false");
}