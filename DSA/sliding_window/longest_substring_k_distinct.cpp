#include <bits/stdc++.h>
using namespace std;
int main(){ string s="eceba"; int k=2; unordered_map<char,int>cnt; int left=0,ans=0; for(int right=0;right<s.size();++right){ cnt[s[right]]++; while(cnt.size()>k){ if(--cnt[s[left]]==0) cnt.erase(s[left]); left++; } ans=max(ans,right-left+1); } cout<<ans; }