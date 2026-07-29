#include <bits/stdc++.h>
using namespace std;
int main() {
  string s = "abc", t = "ahbgdc";
  int i = 0;
  for (char c : t) {
    if (i < s.size() && s[i] == c) ++i;
  }
  cout << (i == s.size() ? "true" : "false");
}