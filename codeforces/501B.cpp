// https://codeforces.com/problemset/problem/501/B

#include <bits/stdc++.h>
using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
using ll = long long;

int main() {
  getsuga tensho;
  int q; 
  cin >> q;
  map<string, string> username;
  while (q--) {
    string old, neww;
    cin >> old >> neww;
    if (username.find(old) == username.end()) {
      username[neww] = old;
    }
    else {
      username[neww] = username[old];
      username.erase(old);
    }
  }
  cout << username.size() << '\n';
  for (auto [curr_name, user]: username) {
    cout << user << ' ' << curr_name << '\n';
  }
  return 0;
}
