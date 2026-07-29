#include <bits/stdc++.h>
using namespace std;
int main(){ int n=5; vector<pair<int,int>>edges={{0,1},{1,2},{3,4}}; vector<vector<int>>adj(n); for(auto&e:edges){ adj[e.first].push_back(e.second); adj[e.second].push_back(e.first); } vector<int>vis(n); int count=0; function<void(int)>dfs=[&](int u){ vis[u]=1; for(int v:adj[u]) if(!vis[v]) dfs(v); };
 for(int i=0;i<n;++i) if(!vis[i]){ count++; dfs(i); } cout<<count; }