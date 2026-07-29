#include <bits/stdc++.h>
using namespace std;
bool check(const string& s, int l, int r) {
  while (l < r) {
    if (s[l++] != s[r--]) return false;
  }
  return true;
}
int main() {
  string s = "abca";
  int l = 0, r = s.size() - 1;
  while (l < r) {
    if (s[l] == s[r]) {
      ++l;
      --r;
      continue;
    }
    cout << ((check(s, l + 1, r) || check(s, l, r - 1)) ? "true" : "false");
    return 0;
  }
  cout << "true";
}