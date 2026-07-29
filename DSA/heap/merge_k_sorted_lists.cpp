#include <bits/stdc++.h>
using namespace std;
struct ListNode {
  int val;
  ListNode* next;
  ListNode(int v) : val(v), next(NULL) {}
};
struct Compare {
  bool operator()(ListNode* a, ListNode* b) const { return a->val > b->val; }
};
int main() {
  ListNode* a = new ListNode(1);
  a->next = new ListNode(4);
  a->next->next = new ListNode(5);
  ListNode* b = new ListNode(1);
  b->next = new ListNode(3);
  b->next->next = new ListNode(4);
  priority_queue<ListNode*, vector<ListNode*>, Compare> pq;
  pq.push(a);
  pq.push(b);
  ListNode dummy(0), *tail = &dummy;
  while (!pq.empty()) {
    auto node = pq.top();
    pq.pop();
    tail->next = node;
    tail = node;
    if (node->next) pq.push(node->next);
  }
  cout << dummy.next->val;
}