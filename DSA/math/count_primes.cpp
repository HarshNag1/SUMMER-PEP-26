#include <bits/stdc++.h>
using namespace std;
int main() {
  int n = 10;
  vector<bool> isPrime(n, true);
  int count = 0;
  for (int i = 2; i < n; ++i) {
    if (isPrime[i]) {
      count++;
      for (long long j = 1LL * i * i; j < n; j += i) isPrime[j] = false;
    }
  }
  cout << count;
}