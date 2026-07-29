#include <bits/stdc++.h>
using namespace std;
int main(){ vector<int>a={1,2,1}; unordered_map<int,int>cnt; int left=0,ans=0; for(int right=0;right<a.size();++right){ cnt[a[right]]++; while(cnt.size()>2){ if(--cnt[a[left]]==0) cnt.erase(a[left]); left++; } ans=max(ans,right-left+1); } cout<<ans; }