/**
*    @author:  TheRockHead
*    created: 15.09.2025 13:08:18
**/

#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define MAX 1e9+7

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  vector<pair<string,string>> v;
  string t1, c1; 
  cin >> t1 >> c1;
  v.push_back(make_pair(t1, c1));
  while (tt > 0) {
    string thing, color;
    cin >> thing >> color;
    bool flag = false;
    for (int i = 0; i < v.size(); i++) {
      if (v[i].first == thing && v[i].second == color) {
        flag = true;
        break;
      }
    }
    if (!flag) v.push_back(make_pair(thing, color));
    else {
      tt--;
      continue;
    }
    tt--;
  }
  // for (auto it: v) {
  //   cout << it.first << ' ' << it.second << '\n';
  // }

  cout << v.size() - 1 << '\n';
  return 0;
}