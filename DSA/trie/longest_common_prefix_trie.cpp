#include <bits/stdc++.h>
using namespace std;
int main(){ vector<string>a={"flower","flow","flight"}; string prefix=a[0]; for(int i=1;i<a.size()&&prefix.size();++i){ while(a[i].find(prefix)!=0) prefix.pop_back(); } cout<<prefix; }