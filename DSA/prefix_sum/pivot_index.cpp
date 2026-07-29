#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> a = {1, 7, 3, 6, 5, 6};
  int total = accumulate(a.begin(), a.end(), 0), left = 0;
  for (int i = 0; i < a.size(); ++i) {
    if (left == total - left - a[i]) {
      cout << i;
      return 0;
    }
    left += a[i];
  }
  cout << -1;
}