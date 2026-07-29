#include <bits/stdc++.h>
using namespace std;
int main(){ string s="anagram",t="nagaram"; array<int,26>cnt={}; for(char c:s) cnt[c-'a']++; for(char c:t) cnt[c-'a']--; for(int x:cnt) if(x){ cout<<"false"; return 0; } cout<<"true"; }