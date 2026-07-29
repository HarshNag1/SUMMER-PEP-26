#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> a = {1, 2, 3, 1};
  int prev = 0, curr = 0;
  for (int x : a) {
    int temp = max(curr, prev + x);
    prev = curr;
    curr = temp;
  }
  cout << curr;
}