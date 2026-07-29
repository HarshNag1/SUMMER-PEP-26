#include <bits/stdc++.h>
using namespace std;
int main() {
  string s = "()[]{}";
  stack<char> st;
  for (char c : s) {
    if (c == '(' || c == '[' || c == '{')
      st.push(c);
    else {
      if (st.empty()) {
        cout << "false";
        return 0;
      }
      char t = st.top();
      st.pop();
      if ((c == ')' && t != '(') || (c == ']' && t != '[') ||
          (c == '}' && t != '{')) {
        cout << "false";
        return 0;
      }
    }
  }
  cout << (st.empty() ? "true" : "false");
}