#include <bits/stdc++.h>
using namespace std;
vector<string> res;
vector<string> board;
int m, n;
struct Trie {
  bool end;
  array<Trie*, 26> next;
  Trie() : end(false) { next.fill(NULL); }
};
void insert(Trie* root, const string& s) {
  for (char c : s) {
    int idx = c - 'a';
    if (!root->next[idx]) root->next[idx] = new Trie();
    root = root->next[idx];
  }
  root->end = true;
}
void dfs(int i, int j, Trie* node, string path) {
  if (i < 0 || j < 0 || i >= m || j >= n) return;
  char c = board[i][j];
  if (c == '#') return;
  int idx = c - 'a';
  if (!node->next[idx]) return;
  node = node->next[idx];
  path.push_back(c);
  if (node->end) {
    res.push_back(path);
    node->end = false;
  }
  board[i][j] = '#';
  dfs(i + 1, j, node, path);
  dfs(i - 1, j, node, path);
  dfs(i, j + 1, node, path);
  dfs(i, j - 1, node, path);
  board[i][j] = c;
}
int main() {
  Trie* root = new Trie();
  vector<string> words = {"oath", "pea", "eat", "rain"};
  for (auto& w : words) insert(root, w);
  board = {"oath", "pea", "eat", "rain"};
  m = board.size();
  n = board[0].size();
  for (int i = 0; i < m; ++i)
    for (int j = 0; j < n; ++j) dfs(i, j, root, "");
  cout << res.size();
}