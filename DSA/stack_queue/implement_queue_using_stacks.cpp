#include <bits/stdc++.h>
using namespace std;
int main(){ stack<int>in,out; auto push=[&](int x){ in.push(x); }; auto pop=[&](){ if(out.empty()){ while(!in.empty()){ out.push(in.top()); in.pop(); } } out.pop(); }; auto peek=[&](){ if(out.empty()){ while(!in.empty()){ out.push(in.top()); in.pop(); } } return out.top(); }; push(1); push(2); cout<<peek(); pop(); cout<<peek(); }