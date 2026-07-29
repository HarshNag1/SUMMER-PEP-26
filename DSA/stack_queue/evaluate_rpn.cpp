#include <bits/stdc++.h>
using namespace std;
int main(){ vector<string>tokens={"2","1","+","3","*"}; stack<int>st; for(auto&s:tokens){ if(s=="+"||s=="-"||s=="*"||s=="/"){ int b=st.top(); st.pop(); int a=st.top(); st.pop(); if(s=="+") st.push(a+b); else if(s=="-") st.push(a-b); else if(s=="*") st.push(a*b); else st.push(a/b); } else st.push(stoi(s)); } cout<<st.top(); }