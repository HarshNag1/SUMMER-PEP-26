#include <bits/stdc++.h>
using namespace std;
int main() {
  int n = 16;
  cout << ((n > 0 && (n & (n - 1)) == 0) ? "true" : "false");
}