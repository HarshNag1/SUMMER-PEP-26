#include <bits/stdc++.h>
using namespace std;
struct DSU {
  vector<int> p;
  DSU(int n) : p(n + 1) { iota(p.begin(), p.end(), 0); }
  int find(int x) { return p[x] == x ? x : p[x] = find(p[x]); }
  bool unite(int a, int b) {
    a = find(a);
    b = find(b);
    if (a == b) return false;
    p[a] = b;
    return true;
  }
};
int main() {
  vector<pair<int, int>> edges = {{1, 2}, {1, 3}, {2, 3}};
  DSU d(3);
  for (auto& e : edges) {
    if (!d.unite(e.first, e.second)) {
      cout << e.first << "," << e.second;
      return 0;
    }
  }
}