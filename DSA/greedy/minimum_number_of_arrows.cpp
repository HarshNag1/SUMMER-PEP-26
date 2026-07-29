#include <bits/stdc++.h>
using namespace std;
int main(){ vector<pair<int,int>>a={{10,16},{2,8},{1,6},{7,12}}; sort(a.begin(),a.end(),[](auto&a,auto&b){ return a.second<b.second; }); int arrows=0,end=-100000; for(auto&p:a){ if(arrows==0||p.first>end){ arrows++; end=p.second; } } cout<<arrows; }