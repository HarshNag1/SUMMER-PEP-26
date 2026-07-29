#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<pair<int, int>> a = {{1, 2}, {2, 3}, {3, 4}, {1, 3}};
  sort(a.begin(), a.end(),
       [](auto& a, auto& b) { return a.second < b.second; });
  int end = -100000, ans = 0;
  for (auto& p : a) {
    if (p.first >= end) {
      ans++;
      end = p.second;
    }
  }
  cout << a.size() - ans;
}