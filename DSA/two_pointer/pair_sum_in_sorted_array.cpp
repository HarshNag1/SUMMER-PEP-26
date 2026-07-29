#include <bits/stdc++.h>
using namespace std;
int main(){ vector<int>a={2,7,11,15}; int target=9; int l=0,r=a.size()-1; while(l<r){ int sum=a[l]+a[r]; if(sum==target){ cout<<l+1<<" "<<r+1; return 0; } if(sum<target) ++l; else --r; } }