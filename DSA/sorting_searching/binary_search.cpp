#include <bits/stdc++.h>
using namespace std;
int main(){ vector<int>a={-1,0,3,5,9,12}; int target=9; int l=0,r=a.size()-1; while(l<=r){ int mid=(l+r)/2; if(a[mid]==target){ cout<<mid; return 0; } if(a[mid]<target) l=mid+1; else r=mid-1; } cout<<-1; }