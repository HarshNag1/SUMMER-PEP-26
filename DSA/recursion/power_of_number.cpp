#include <bits/stdc++.h>
using namespace std;
long long power(long long x, long long n) {
  return n == 0 ? 1 : x * power(x, n - 1);
}
int main() { cout << power(2, 10); }