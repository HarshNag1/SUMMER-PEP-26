#include <bits/stdc++.h>
using namespace std;
bool dfs(int i, int sum, const vector<int>& a, int target) {
  if (sum == target) return true;
  if (i == a.size() || sum > target) return false;
  return dfs(i + 1, sum + a[i], a, target) || dfs(i + 1, sum, a, target);
}
int main() {
  vector<int> a = {3, 34, 4, 12, 5, 2};
  cout << (dfs(0, 0, a, 9) ? "true" : "false");
}