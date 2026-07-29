#include <bits/stdc++.h>
using namespace std;
struct DSU {
  vector<int> p;
  int comp;
  DSU(int n) : p(n), comp(n) { iota(p.begin(), p.end(), 0); }
  int find(int x) { return p[x] == x ? x : p[x] = find(p[x]); }
  void unite(int a, int b) {
    a = find(a);
    b = find(b);
    if (a != b) {
      p[a] = b;
      comp--;
    }
  }
};
int main() {
  vector<pair<int, int>> stones = {{0, 0}, {0, 1}, {1, 0},
                                   {1, 2}, {2, 1}, {2, 2}};
  int n = stones.size();
  DSU d(n);
  unordered_map<int, int> row, col;
  for (int i = 0; i < n; ++i) {
    auto [r, c] = stones[i];
    if (row.count(r))
      d.unite(i, row[r]);
    else
      row[r] = i;
    if (col.count(c))
      d.unite(i, col[c]);
    else
      col[c] = i;
  }
  cout << n - d.comp;
}