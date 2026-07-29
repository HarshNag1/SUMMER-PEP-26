#include <bits/stdc++.h>
using namespace std;
long long fact(int n) { return n <= 1 ? 1 : n * fact(n - 1); }
int main() { cout << fact(5); }