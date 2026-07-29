#include <bits/stdc++.h>
using namespace std;
long long modexp(long long a, long long e, long long m) {
  long long res = 1;
  a %= m;
  while (e) {
    if (e & 1) res = (res * a) % m;
    a = (a * a) % m;
    e >>= 1;
  }
  return res;
}
int main() { cout << modexp(2, 10, 1000); }