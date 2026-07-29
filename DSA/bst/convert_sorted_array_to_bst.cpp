#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
  int val;
  TreeNode *left, *right;
  TreeNode(int v) : val(v), left(NULL), right(NULL) {}
};
TreeNode* build(const vector<int>& a, int l, int r) {
  if (l > r) return NULL;
  int mid = (l + r) / 2;
  TreeNode* node = new TreeNode(a[mid]);
  node->left = build(a, l, mid - 1);
  node->right = build(a, mid + 1, r);
  return node;
}
int main() {
  vector<int> a = {-10, -3, 0, 5, 9};
  TreeNode* root = build(a, 0, a.size() - 1);
  cout << root->val;
}