#include <bits/stdc++.h>
using namespace std;
int main(){ vector<int>a={-4,-1,0,3,10}; int n=a.size(); vector<int>res(n); int l=0,r=n-1; for(int k=n-1;k>=0;--k){ if(abs(a[l])>abs(a[r])) res[k]=a[l]*a[l++]; else res[k]=a[r]*a[r--]; } for(int x:res) cout<<x<<" "; }