#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> coins = {1, 2, 5};
  int amount = 11;
  vector<int> dp(amount + 1, amount + 1);
  dp[0] = 0;
  for (int i = 1; i <= amount; ++i)
    for (int c : coins)
      if (c <= i) dp[i] = min(dp[i], dp[i - c] + 1);
  cout << (dp[amount] > amount ? -1 : dp[amount]);
}