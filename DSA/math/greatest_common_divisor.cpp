#include <bits/stdc++.h>
using namespace std;
int main(){ long long a=48,b=18; while(b){ a%=b; swap(a,b); } cout<<a; }