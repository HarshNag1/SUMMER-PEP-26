#include <bits/stdc++.h>
using namespace std;
int main(){ vector<int>a={5,7,7,8,8,10}; int target=8; auto findPos=[&](bool first){ int l=0,r=a.size()-1,res=-1; while(l<=r){ int mid=(l+r)/2; if(a[mid]==target){ res=mid; if(first) r=mid-1; else l=mid+1; } else if(a[mid]<target) l=mid+1; else r=mid-1; } return res; };
 cout<<findPos(true)<<" "<<findPos(false); }