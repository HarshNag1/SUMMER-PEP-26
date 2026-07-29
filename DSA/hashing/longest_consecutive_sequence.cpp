#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> a = {100, 4, 200, 1, 3, 2};
  unordered_set<int> s(a.begin(), a.end());
  int best = 0;
  for (int x : a) {
    if (!s.count(x - 1)) {
      int cur = x;
      while (s.count(cur + 1)) ++cur;
      best = max(best, cur - x + 1);
    }
  }
  cout << best;
}