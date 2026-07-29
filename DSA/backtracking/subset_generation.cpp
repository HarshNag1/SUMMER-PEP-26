#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>res;
void dfs(int i,vector<int>&a,vector<int>&path){ if(i==a.size()){ res.push_back(path); return; } path.push_back(a[i]); dfs(i+1,a,path); path.pop_back(); dfs(i+1,a,path); }
int main(){ vector<int>a={1,2,3}; vector<int>path; dfs(0,a,path); cout<<res.size(); }