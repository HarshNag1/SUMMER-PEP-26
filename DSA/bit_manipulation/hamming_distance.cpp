#include <bits/stdc++.h>
using namespace std;
int main() {
  int x = 1, y = 4;
  int z = x ^ y, c = 0;
  while (z) {
    c += z & 1;
    z >>= 1;
  }
  cout << c;
}