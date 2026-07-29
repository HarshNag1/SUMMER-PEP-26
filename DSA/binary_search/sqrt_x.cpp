#include <bits/stdc++.h>
using namespace std;
int main(){ int x=8; int l=0,r=x,ans=0; while(l<=r){ int mid=(l+r)/2; if((long long)mid*mid<=x){ ans=mid; l=mid+1; } else r=mid-1; } cout<<ans; }