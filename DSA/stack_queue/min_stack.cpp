#include <bits/stdc++.h>
using namespace std;
int main() {
  stack<pair<int, int>> st;
  vector<int> a = {-2, 0, -3};
  for (int x : a) {
    int m = st.empty() ? x : min(st.top().second, x);
    st.push({x, m});
  }
  cout << st.top().second;
}