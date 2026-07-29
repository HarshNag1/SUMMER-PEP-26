#include <bits/stdc++.h>
using namespace std;
int main(){ vector<int>a={-2,1,-3,4,-1,2,1,-5,4}; int maxsum=a[0],curr=a[0]; for(int i=1;i<a.size();++i){ curr=max(a[i],curr+a[i]); maxsum=max(maxsum,curr); } cout<<maxsum; }