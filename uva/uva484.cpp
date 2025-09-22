// @uthor: TheRockHead

// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=425
// use of basic STL data structure like Map, Vector

#include <bits/stdc++.h>
using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
using ll = long long;

int main() {
  getsuga tensho;
  int n;
  map<int, int> mp;
  vector<int> track;
  while (cin >> n) {
    if (mp[n] == 0) track.push_back(n);
    mp[n]++;
  }
  for (auto it: track) {
    cout << it << ' ' << mp[it] << '\n';
  }
  return 0;
}
