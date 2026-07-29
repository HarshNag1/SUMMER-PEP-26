#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> a = {1, 3, 5, 7, 9, 11};
  int n = a.size();
  vector<int> tree(2 * n);
  for (int i = 0; i < n; ++i) tree[n + i] = a[i];
  for (int i = n - 1; i > 0; --i) tree[i] = tree[i * 2] + tree[i * 2 + 1];
  cout << tree[1];
}