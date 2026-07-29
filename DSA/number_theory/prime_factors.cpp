#include <bits/stdc++.h>
using namespace std;
int main(){ int n=56; vector<int>res; for(int d=2;d*d<=n;++d){ while(n%d==0){ res.push_back(d); n/=d; } } if(n>1) res.push_back(n); for(int x:res) cout<<x<<" "; }