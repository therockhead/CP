/**
*    @author:  TheRockHead
*    created: 16.09.2025 02:26:13
**/

#include <bits/stdc++.h>

using namespace std;
int main() {
  ios::sync_with_stdio(false); cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--) {
    string str;
    cin >> str;
    int r = 0;
    for (int i = 1; i < str.size(); i++) {
      if (str[i] != '0') {
        r = i;
        break;
      }
    }
    string r1, r2;
    for (int i = 0; i < str.size(); i++) {
      if (i < r) {
        r1 += str[i];
      }
      else {
        r2 += str[i];
      }
    }
    if (r1.empty() || r2.empty()) {
      cout << -1 << '\n';
      continue;
    }
    long long int v2 = stoll(r2);
    long long int v1 = stoll(r1);
    cerr << v2 << ' ' << v1 << '\n';
    if (v2 > v1) {
      cout << v1 << ' ' << v2 << '\n';
    }
    else {
      cout << "-1\n";
    }
  }
  return 0;
}