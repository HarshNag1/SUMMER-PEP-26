#include <bits/stdc++.h>
using namespace std;
int main(){ vector<int>a={2,3,1,2,4,3}; int s=7; int l=0,sum=0,ans=INT_MAX; for(int r=0;r<a.size();++r){ sum+=a[r]; while(sum>=s){ ans=min(ans,r-l+1); sum-=a[l++]; } } cout<<(ans==INT_MAX?0:ans); }