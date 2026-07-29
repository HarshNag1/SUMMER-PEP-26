#include <bits/stdc++.h>
using namespace std;
int main(){ int n=29; if(n<2){ cout<<"false"; return 0; } for(int i=2;i*i<=n;++i) if(n%i==0){ cout<<"false"; return 0; } cout<<"true"; }