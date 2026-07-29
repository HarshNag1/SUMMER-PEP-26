#include <bits/stdc++.h>
using namespace std;
int main(){ vector<int>a={1,1,1}; int k=2; unordered_map<int,int>m={{0,1}}; int sum=0,count=0; for(int x:a){ sum+=x; if(m.count(sum-k)) count+=m[sum-k]; m[sum]++; } cout<<count; }