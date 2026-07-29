#include <bits/stdc++.h>
using namespace std;
int fib(int n) { return n < 2 ? n : fib(n - 1) + fib(n - 2); }
int main() { cout << fib(6); }