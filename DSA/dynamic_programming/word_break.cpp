#include <bits/stdc++.h>
using namespace std;
int main() {
  string s = "leetcode";
  unordered_set<string> dict = {"leet", "code"};
  vector<bool> dp(s.size() + 1);
  dp[0] = true;
  for (int i = 1; i <= s.size(); ++i)
    for (int j = 0; j < i; ++j)
      if (dp[j] && dict.count(s.substr(j, i - j))) {
        dp[i] = true;
        break;
      }
  cout << (dp[s.size()] ? "true" : "false");
}