#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> a = {3, 2, 3};
  int count = 0, candidate = 0;
  for (int x : a) {
    if (count == 0) candidate = x;
    count += x == candidate ? 1 : -1;
  }
  cout << candidate;
}