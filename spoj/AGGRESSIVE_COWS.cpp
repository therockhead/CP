#include <bits/stdc++.h>
using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
using ll = long long;

int n, k;

bool ok(vector<int> &pos, ll x) {
  int cows = 1;
  ll pos_of_last_cow = pos[0];
  for (int i = 1; i < pos.size(); i++) {
    if (pos[i] - pos_of_last_cow >= x) {
      cows++;
      pos_of_last_cow = pos[i];
    }
  }
  return cows >= k;
}

int main() {
  getsuga tensho;
  int t;
  cin >> t;
  while (t--) {
    cin >> n >> k;
    vector<int> pos(n);
    for (int i = 0; i < n; i++) {
      cin >> pos[i];
    }
    sort(pos.begin(), pos.end());
    ll l = 0, r = 1e9, ans = 0;
    while (l <= r) {
      ll mid = (l+r)/2;
      if (ok(pos, mid)) {
        ans = mid;
        // cerr << ans << '\n';
        l = mid + 1;
      }
      else {
        r = mid - 1;
      }
    }
    cout << ans << '\n';
  }
  
  return 0;
}