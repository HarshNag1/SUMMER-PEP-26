#include <bits/stdc++.h>
using namespace std;
int main(){ vector<int>a={1,3,5,6}; int target=5; int l=0,r=a.size(); while(l<r){ int mid=(l+r)/2; if(a[mid]<target) l=mid+1; else r=mid; } cout<<l; }