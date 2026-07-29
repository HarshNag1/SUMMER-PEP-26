#include <bits/stdc++.h>
using namespace std;
int main(){ int n=5; vector<int>res(n+1); for(int i=1;i<=n;++i) res[i]=res[i&(i-1)]+1; for(int x:res) cout<<x<<" "; }