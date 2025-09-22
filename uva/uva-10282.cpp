// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1223
#include <bits/stdc++.h>
using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
using ll = long long;

int main() {
  getsuga tensho;
  string line;
  map<string, string> mp;
  while (getline(cin, line)) {
    if (line.empty()) break;
    else {
      stringstream ss(line);
      string s1, s2;
      ss >> s1 >> s2;
      mp[s2] = s1;
    }
  }
  string word;
  while (getline(cin, word)) {
    if (mp.find(word) != mp.end()) {
      cout << mp[word] << '\n';
    }
    else {
      cout << "eh\n";
    }
  }
  return 0;
}
