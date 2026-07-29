#include <bits/stdc++.h>
using namespace std;
struct DSU{ vector<int>p; DSU(int n):p(n){ iota(p.begin(),p.end(),0); } int find(int x){ return p[x]==x?x:p[x]=find(p[x]); } bool unite(int a,int b){ a=find(a); b=find(b); if(a==b) return false; p[a]=b; return true; } };
int main(){ int n=5; vector<pair<int,int>>edges={{0,1},{1,2},{3,4}}; DSU d(n); for(auto&e:edges) d.unite(e.first,e.second); unordered_set<int>sets; for(int i=0;i<n;++i) sets.insert(d.find(i)); cout<<sets.size(); }