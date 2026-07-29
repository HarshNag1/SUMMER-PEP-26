#include <bits/stdc++.h>
using namespace std;
int main(){ string s1="ab",s2="eidbaooo"; array<int,26>t={},w={}; for(char c:s1) t[c-'a']++; int left=0,right=0; while(right<s2.size()){ w[s2[right++]-'a']++; if(right-left>s1.size()) w[s2[left++]-'a']--; if(w==t){ cout<<"true"; return 0; } } cout<<"false"; }