#include <bits/stdc++.h>
using namespace std;
int main(){ vector<int>gas={1,2,3,4,5}; vector<int>cost={3,4,5,1,2}; int total=0,cur=0,start=0; for(int i=0;i<gas.size();++i){ cur+=gas[i]-cost[i]; total+=gas[i]-cost[i]; if(cur<0){ start=i+1; cur=0; } } cout<<(total<0?-1:start); }