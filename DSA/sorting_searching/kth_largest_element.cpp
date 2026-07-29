#include <bits/stdc++.h>
using namespace std;
int main(){ vector<int>a={3,2,1,5,6,4}; int k=2; nth_element(a.begin(),a.end()-k,a.end()); cout<<a[a.size()-k]; }