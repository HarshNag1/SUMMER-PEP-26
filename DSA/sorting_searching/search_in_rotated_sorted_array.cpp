#include <bits/stdc++.h>
using namespace std;
int main(){ vector<int>a={4,5,6,7,0,1,2}; int target=0; int l=0,r=a.size()-1; while(l<=r){ int mid=(l+r)/2; if(a[mid]==target){ cout<<mid; return 0; } if(a[l]<=a[mid]){ if(a[l]<=target&&target<a[mid]) r=mid-1; else l=mid+1; } else { if(a[mid]<target&&target<=a[r]) l=mid+1; else r=mid-1; } } cout<<-1; }