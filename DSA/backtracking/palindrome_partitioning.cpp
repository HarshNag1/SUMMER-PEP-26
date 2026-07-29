#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> res;
vector<string> curr;
bool pal(const string& s, int i, int j) {
  while (i < j)
    if (s[i++] != s[j--]) return false;
  return true;
}
void dfs(int idx, const string& s) {
  if (idx == s.size()) {
    res.push_back(curr);
    return;
  }
  for (int j = idx; j < s.size(); ++j) {
    if (pal(s, idx, j)) {
      curr.push_back(s.substr(idx, j - idx + 1));
      dfs(j + 1, s);
      curr.pop_back();
    }
  }
}
int main() {
  string s = "aab";
  dfs(0, s);
  cout << res.size();
}