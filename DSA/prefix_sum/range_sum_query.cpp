#include <bits/stdc++.h>
using namespace std;
int main(){ vector<int>a={-2,0,3,-5,2,-1}; vector<int>pref(a.size()+1); for(int i=0;i<a.size();++i) pref[i+1]=pref[i]+a[i]; cout<<pref[3]-pref[0]; }