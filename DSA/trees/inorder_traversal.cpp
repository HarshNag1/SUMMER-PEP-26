#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
  int val;
  TreeNode *left, *right;
  TreeNode(int v) : val(v), left(NULL), right(NULL) {}
};
int main() {
  TreeNode* root = new TreeNode(1);
  root->right = new TreeNode(2);
  root->right->left = new TreeNode(3);
  vector<int> res;
  function<void(TreeNode*)> dfs = [&](TreeNode* node) {
    if (!node) return;
    dfs(node->left);
    res.push_back(node->val);
    dfs(node->right);
  };
  dfs(root);
  for (int x : res) cout << x << " ";
}