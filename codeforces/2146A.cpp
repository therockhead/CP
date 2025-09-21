// https://codeforces.com/contest/2146/problem/A

#include <bits/stdc++.h>
using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
using ll = long long;

int main() {
  getsuga tensho;
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    map<int, int> mp;
    int mx = 0;
    for (int i = 0; i < n; i++) {
      int x; cin >> x;
      mp[x]++;
      mx = max(mx, mp[x]);
    }
    if (mp.size() == 1) {
      for (auto [x, y]: mp) {
        cout << y << '\n';
        continue;
      }
    }
    else {
      vector<int> v;
      for (auto [x, y] : mp) {
        int cnt = 0;
        for (auto [x1, y1]: mp) {
          if (y1 >= y) cnt++;
        }
        v.push_back(cnt*y);
      }
      sort(v.begin(), v.end());
      cout << v[v.size()-1] << '\n'; 
    }
    // cerr << mx << '\n';
    // cout << '\n';
  }
  
  return 0;
}
