#include <bits/stdc++.h>
using namespace std;
int n;
vector<vector<string>> res;
void dfs(int row, vector<string>& board, vector<bool>& cols, vector<bool>& diag,
         vector<bool>& anti) {
  if (row == n) {
    res.push_back(board);
    return;
  }
  for (int c = 0; c < n; ++c) {
    if (cols[c] || diag[row - c + n] || anti[row + c]) continue;
    cols[c] = diag[row - c + n] = anti[row + c] = true;
    board[row][c] = 'Q';
    dfs(row + 1, board, cols, diag, anti);
    board[row][c] = '.';
    cols[c] = diag[row - c + n] = anti[row + c] = false;
  }
}
int main() {
  n = 4;
  vector<string> board(n, string(n, '.'));
  vector<bool> cols(n), diag(2 * n), anti(2 * n);
  dfs(0, board, cols, diag, anti);
  cout << res.size();
}