#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> a = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  int best = a[0], current = a[0];
  for (int i = 1; i < a.size(); ++i) {
    current = max(a[i], current + a[i]);
    best = max(best, current);
  }
  cout << best;
}