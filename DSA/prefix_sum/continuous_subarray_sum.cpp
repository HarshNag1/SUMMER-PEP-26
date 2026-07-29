#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> a = {23, 2, 4, 6, 7};
  int k = 6;
  unordered_map<int, int> m = {{0, -1}};
  int sum = 0;
  for (int i = 0; i < a.size(); ++i) {
    sum += a[i];
    int r = sum % k;
    if (r < 0) r += k;
    if (m.count(r)) {
      cout << "true";
      return 0;
    }
    m.emplace(r, i);
  }
  cout << "false";
}