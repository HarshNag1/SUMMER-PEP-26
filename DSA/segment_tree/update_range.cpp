#include <bits/stdc++.h>
using namespace std;
struct SegmentTree {
  vector<int> tree, lazy;
  int n;
  SegmentTree(int n) : n(n), tree(4 * n), lazy(4 * n) {};
  void update(int idx, int l, int r, int ql, int qr, int val) {
    if (lazy[idx]) {
      tree[idx] += (r - l + 1) * lazy[idx];
      if (l < r) {
        lazy[idx * 2] += lazy[idx];
        lazy[idx * 2 + 1] += lazy[idx];
      }
      lazy[idx] = 0;
    }
    if (ql > r || qr < l) return;
    if (ql <= l && r <= qr) {
      tree[idx] += (r - l + 1) * val;
      if (l < r) {
        lazy[idx * 2] += val;
        lazy[idx * 2 + 1] += val;
      }
      return;
    }
    int mid = (l + r) / 2;
    update(idx * 2, l, mid, ql, qr, val);
    update(idx * 2 + 1, mid + 1, r, ql, qr, val);
    tree[idx] = tree[idx * 2] + tree[idx * 2 + 1];
  }
};
int main() {
  SegmentTree st(5);
  st.update(1, 0, 4, 1, 3, 2);
  cout << st.tree[1];
}