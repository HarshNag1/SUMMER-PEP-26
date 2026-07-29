#include <bits/stdc++.h>
using namespace std;
int main(){ vector<int>a={0,0,1,1,1,2,2,3,3,4}; int i=0; for(int j=1;j<a.size();++j){ if(a[j]!=a[i]) a[++i]=a[j]; } cout<<i+1; }