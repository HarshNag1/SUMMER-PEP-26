#include <bits/stdc++.h>
using namespace std;
struct DSU{ vector<int>p; DSU(int n):p(n){ iota(p.begin(),p.end(),0); } int find(int x){ return p[x]==x?x:p[x]=find(p[x]); } void unite(int a,int b){ a=find(a); b=find(b); if(a!=b) p[a]=b; } };
int main(){ vector<vector<int>>adj={{1,1,0},{1,1,0},{0,0,1}}; int n=adj.size(); DSU d(n); for(int i=0;i<n;++i) for(int j=0;j<n;++j) if(adj[i][j]) d.unite(i,j); unordered_set<int>s; for(int i=0;i<n;++i) s.insert(d.find(i)); cout<<s.size(); }