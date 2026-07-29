#include <bits/stdc++.h>
using namespace std;
int m,n; vector<string>board; string word;
bool dfs(int i,int j,int k){ if(k==word.size()) return true; if(i<0||j<0||i>=m||j>=n||board[i][j]!=word[k]) return false; char c=board[i][j]; board[i][j]="#"; bool ok=dfs(i+1,j,k+1)||dfs(i-1,j,k+1)||dfs(i,j+1,k+1)||dfs(i,j-1,k+1); board[i][j]=c; return ok; }
int main(){ board={"ABCE","SFCS","ADEE"}; word="ABCCED"; m=board.size(); n=board[0].size(); cout<<(dfs(0,0,0)?"true":"false"); }