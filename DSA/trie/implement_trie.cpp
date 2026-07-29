#include <bits/stdc++.h>
using namespace std;
struct Trie{bool end; array<Trie*,26>next; Trie():end(false){ next.fill(NULL); } };
void insert(Trie*root,const string&s){ for(char c:s){ int idx=c-'a'; if(!root->next[idx]) root->next[idx]=new Trie(); root=root->next[idx]; } root->end=true; }
bool search(Trie*root,const string&s){ for(char c:s){ int idx=c-'a'; if(!root->next[idx]) return false; root=root->next[idx]; } return root->end; }
int main(){ Trie*root=new Trie(); insert(root,"apple"); cout<<(search(root,"apple")?"true":"false"); }