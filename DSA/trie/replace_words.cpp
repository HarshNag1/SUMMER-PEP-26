#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<string> dict = {"cat", "bat", "rat"};
  string sentence = "the cattle was rattled by the battery";
  unordered_set<string> s(dict.begin(), dict.end());
  vector<string> words;
  string word;
  istringstream iss(sentence);
  while (iss >> word) {
    string prefix;
    for (int i = 0; i < word.size(); ++i) {
      prefix.push_back(word[i]);
      if (s.count(prefix)) {
        word = prefix;
        break;
      }
    }
    words.push_back(word);
  }
  for (int i = 0; i < words.size(); ++i) {
    cout << words[i];
    if (i + 1 < words.size()) cout << " ";
  }
}