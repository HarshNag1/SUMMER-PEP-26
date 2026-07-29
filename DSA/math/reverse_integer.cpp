#include <bits/stdc++.h>
using namespace std;
int main(){ int x=123; long long rev=0; while(x){ rev=rev*10+x%10; x/=10; } cout<<rev; }