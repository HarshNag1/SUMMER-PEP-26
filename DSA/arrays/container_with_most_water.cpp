#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> h = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  int l = 0, r = h.size() - 1, maxa = 0;
  while (l < r) {
    maxa = max(maxa, min(h[l], h[r]) * (r - l));
    if (h[l] < h[r])
      ++l;
    else
      --r;
  }
  cout << maxa;
}