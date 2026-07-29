#include <bits/stdc++.h>
using namespace std;
int main(){ vector<int>a={2,3,1,1,4}; int reach=0; for(int i=0;i<a.size();++i){ if(i>reach){ cout<<"false"; return 0; } reach=max(reach,i+a[i]); } cout<<"true"; }