#include <bits/stdc++.h>
using namespace std;
struct DSU {
  vector<int> p;
  DSU(int n) : p(n) { iota(p.begin(), p.end(), 0); }
  int find(int x) { return p[x] == x ? x : p[x] = find(p[x]); }
  void unite(int a, int b) {
    a = find(a);
    b = find(b);
    p[a] = b;
  }
};
int main() {
  vector<vector<string>> accounts = {
      {"John", "johnsmith@mail.com", "john00@mail.com"},
      {"John", "johnnybravo@mail.com"},
      {"John", "johnsmith@mail.com", "john_newyork@mail.com"}};
  DSU d(accounts.size());
  unordered_map<string, int> owner;
  for (int i = 0; i < accounts.size(); ++i) {
    for (int j = 1; j < accounts[i].size(); ++j) {
      if (owner.count(accounts[i][j]))
        d.unite(i, owner[accounts[i][j]]);
      else
        owner[accounts[i][j]] = i;
    }
  }
  cout << owner.size();
}