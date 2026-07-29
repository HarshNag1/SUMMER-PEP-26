#include <bits/stdc++.h>
using namespace std;
int main(){ vector<int>a={0,1,0,3,12}; int pos=0; for(int x:a){ if(x!=0) a[pos++]=x; } while(pos<a.size()) a[pos++]=0; for(int x:a) cout<<x<<" "; }