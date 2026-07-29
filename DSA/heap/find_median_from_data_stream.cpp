#include <bits/stdc++.h>
using namespace std;
int main() {
  priority_queue<int> lower;
  priority_queue<int, vector<int>, greater<int>> higher;
  vector<int> a = {1, 2, 3};
  for (int x : a) {
    if (lower.empty() || x <= lower.top())
      lower.push(x);
    else
      higher.push(x);
    if (lower.size() > higher.size() + 1) {
      higher.push(lower.top());
      lower.pop();
    }
    if (higher.size() > lower.size()) {
      lower.push(higher.top());
      higher.pop();
    }
  }
  cout << lower.top();
}