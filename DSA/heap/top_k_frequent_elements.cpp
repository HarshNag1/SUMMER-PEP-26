#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> a = {1, 1, 1, 2, 2, 3};
  int k = 2;
  unordered_map<int, int> cnt;
  for (int x : a) cnt[x]++;
  priority_queue<pair<int, int>> pq;
  for (auto& p : cnt) pq.push({p.second, p.first});
  vector<int> res;
  while (k--) {
    res.push_back(pq.top().second);
    pq.pop();
  }
  for (int x : res) cout << x << " ";
}