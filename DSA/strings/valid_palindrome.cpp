#include <bits/stdc++.h>
using namespace std;
int main() {
  string s = "A man, a plan, a canal: Panama";
  string t;
  for (char c : s) {
    if (isalnum(c)) t.push_back(tolower(c));
  }
  int l = 0, r = t.size() - 1;
  while (l < r) {
    if (t[l++] != t[r--]) {
      cout << "false";
      return 0;
    }
  }
  cout << "true";
}