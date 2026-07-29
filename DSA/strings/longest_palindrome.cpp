#include <bits/stdc++.h>
using namespace std;
int main() {
  string s = "babad";
  int n = s.size(), start = 0, len = 1;
  for (int i = 0; i < n; ++i) {
    int l = i, r = i;
    while (l >= 0 && r < n && s[l] == s[r]) {
      if (r - l + 1 > len) {
        len = r - l + 1;
        start = l;
      }
      --l;
      ++r;
    }
    l = i;
    r = i + 1;
    while (l >= 0 && r < n && s[l] == s[r]) {
      if (r - l + 1 > len) {
        len = r - l + 1;
        start = l;
      }
      --l;
      ++r;
    }
  }
  cout << s.substr(start, len);
}