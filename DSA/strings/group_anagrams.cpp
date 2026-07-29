#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<string> a = {"eat", "tea", "tan", "ate", "nat", "bat"};
  unordered_map<string, vector<string>> m;
  for (auto& s : a) {
    string t = s;
    sort(t.begin(), t.end());
    m[t].push_back(s);
  }
  vector<vector<string>> res;
  for (auto& pr : m) res.push_back(pr.second);
  for (auto& g : res) {
    for (auto& x : g) cout << x << " ";
    cout << "
            "; } }