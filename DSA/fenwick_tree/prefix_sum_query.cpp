#include <bits/stdc++.h>
using namespace std;
struct Fenwick{ vector<int>f; int n; Fenwick(int n):n(n),f(n+1){}; void update(int i,int v){ for(;i<=n;i+=i&-i) f[i]+=v; } int query(int i){ int s=0; for(;i>0;i-=i&-i) s+=f[i]; return s; } };
int main(){ vector<int>a={1,2,3,4,5}; Fenwick f(a.size()); for(int i=0;i<a.size();++i) f.update(i+1,a[i]); cout<<f.query(3); }