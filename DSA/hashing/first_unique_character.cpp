#include <bits/stdc++.h>
using namespace std;
int main() {
  string s = "leetcode";
  array<int, 26> cnt = {};
  for (char c : s) cnt[c - 'a']++;
  for (int i = 0; i < s.size(); ++i) {
    if (cnt[s[i] - 'a'] == 1) {
      cout << i;
      return 0;
    }
  }
  cout << -1;
}