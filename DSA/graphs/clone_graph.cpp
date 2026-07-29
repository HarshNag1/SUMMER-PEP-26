#include <bits/stdc++.h>
using namespace std;
struct Node{int val; vector<Node*>neighbors; Node(int v):val(v){} };
Node* clone(Node*node){ if(!node) return NULL; unordered_map<Node*,Node*>m; function<Node*(Node*)>dfs=[&](Node*cur){ if(m.count(cur)) return m[cur]; Node*copy=new Node(cur->val); m[cur]=copy; for(Node*n:cur->neighbors) copy->neighbors.push_back(dfs(n)); return copy; };
 return dfs(node); }
int main(){ Node*a=new Node(1); Node*b=new Node(2); a->neighbors.push_back(b); b->neighbors.push_back(a); Node*c=clone(a); cout<<c->val; }