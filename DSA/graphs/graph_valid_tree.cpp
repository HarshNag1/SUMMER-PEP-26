#include <bits/stdc++.h>
using namespace std;
int main() {
  int n = 5;
  vector<pair<int, int>> edges = {{0, 1}, {0, 2}, {0, 3}, {1, 4}};
  vector<vector<int>> adj(n);
  for (auto& e : edges) {
    adj[e.first].push_back(e.second);
    adj[e.second].push_back(e.first);
  }
  vector<int> vis(n);
  function<bool(int, int)> dfs = [&](int u, int p) {
    vis[u] = 1;
    for (int v : adj[u])
      if (v != p) {
        if (vis[v]) return false;
        if (!dfs(v, u)) return false;
      }
    return true;
  };
  cout << ((dfs(0, -1) && count(vis.begin(), vis.end(), 1) == n) ? "true"
                                                                 : "false");
}