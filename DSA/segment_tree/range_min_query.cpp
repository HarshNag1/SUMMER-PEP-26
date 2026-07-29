#include <bits/stdc++.h>
using namespace std;
struct SegmentTree {
  vector<int> tree;
  int n;
  SegmentTree(const vector<int>& a) : n(a.size()), tree(4 * n) {
    build(a, 1, 0, n - 1);
  }
  void build(const vector<int>& a, int idx, int l, int r) {
    if (l == r) {
      tree[idx] = a[l];
      return;
    }
    int mid = (l + r) / 2;
    build(a, idx * 2, l, mid);
    build(a, idx * 2 + 1, mid + 1, r);
    tree[idx] = min(tree[idx * 2], tree[idx * 2 + 1]);
  }
  int query(int idx, int l, int r, int ql, int qr) {
    if (ql > r || qr < l) return INT_MAX;
    if (ql <= l && r <= qr) return tree[idx];
    int mid = (l + r) / 2;
    return min(query(idx * 2, l, mid, ql, qr),
               query(idx * 2 + 1, mid + 1, r, ql, qr));
  }
};
int main() {
  vector<int> a = {1, 3, -1, 2};
  SegmentTree st(a);
  cout << st.query(1, 0, a.size() - 1, 1, 2);
}