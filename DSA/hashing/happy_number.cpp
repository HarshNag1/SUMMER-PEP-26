#include <bits/stdc++.h>
using namespace std;
int next(int n) {
  int s = 0;
  while (n) {
    int d = n % 10;
    n /= 10;
    s += d * d;
  }
  return s;
}
int main() {
  int n = 19;
  unordered_set<int> seen;
  while (n != 1 && !seen.count(n)) {
    seen.insert(n);
    n = next(n);
  }
  cout << ((n == 1) ? "true" : "false");
}