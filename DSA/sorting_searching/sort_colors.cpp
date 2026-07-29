#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> a = {2, 0, 2, 1, 1, 0};
  int low = 0, mid = 0, high = a.size() - 1;
  while (mid <= high) {
    if (a[mid] == 0)
      swap(a[low++], a[mid++]);
    else if (a[mid] == 1)
      ++mid;
    else
      swap(a[mid], a[high--]);
  }
  for (int x : a) cout << x << " ";
}