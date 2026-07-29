#include <bits/stdc++.h>
using namespace std;
int main() {
  int n = 10;
  int count = 0;
  for (long long i = 5; i <= n; i *= 5) count += n / i;
  cout << count;
}