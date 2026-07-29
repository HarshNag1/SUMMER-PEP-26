#include <bits/stdc++.h>
using namespace std;
int main(){ vector<pair<int,int>>points={{1,3},{-2,2}}; int k=1; priority_queue<pair<int,pair<int,int>>>pq; for(auto&p:points){ int d=p.first*p.first+p.second*p.second; pq.push({d,p}); if(pq.size()>k) pq.pop(); } auto res=pq.top().second; cout<<res.first<<","<<res.second; }