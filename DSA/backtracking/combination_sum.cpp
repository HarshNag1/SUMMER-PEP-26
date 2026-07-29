#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> res;
void dfs(int i, int target, vector<int>& a, vector<int>& path) {
  if (target == 0) {
    res.push_back(path);
    return;
  }
  if (i == a.size() || target < 0) return;
  path.push_back(a[i]);
  dfs(i, target - a[i], a, path);
  path.pop_back();
  dfs(i + 1, target, a, path);
}
int main() {
  vector<int> a = {2, 3, 6, 7};
  vector<int> path;
  dfs(0, 7, a, path);
  cout << res.size();
}