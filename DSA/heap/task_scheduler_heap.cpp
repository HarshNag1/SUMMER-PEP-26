#include <bits/stdc++.h>
using namespace std;
int main(){ string tasks="AABBB"; unordered_map<char,int>cnt; for(char c:tasks) cnt[c]++; priority_queue<int>pq; for(auto&p:cnt) pq.push(p.second); int intervals=0; while(pq.size()>1){ int a=pq.top(); pq.pop(); int b=pq.top(); pq.pop(); intervals+=2; if(--a) pq.push(a); if(--b) pq.push(b); } intervals += pq.empty()?0:pq.top(); cout<<intervals; }