/**
 *    author:  TheRockHead
 *    created: 10.09.2025 11:38:35
**/

// B. Kuriyama Mirai's Stones (1200 Rated)

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define MAX 1e9+7

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<ll> v(n+1);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }
  vector<ll> prefix(n+1);
  prefix[0] = 0;
  for (int i = 1; i <= n; i++) {
    prefix[i] = prefix[i-1] + v[i];
  }
  sort(v.begin(), v.end());
  // cerr << '\n';
  for (auto it: v) cerr << it << ' ';
   // cerr << '\n';
  vector<ll> prefix1(n+1);
  prefix1[0] = v[0];
  for (int i = 1; i <= n; i++) {
    prefix1[i] = prefix1[i-1] + v[i];
  }
  // for (auto it: prefix) { // no effect
  //   cerr << it << ' '; // ostream
  // }
  int q; cin >> q; // query
  while (q--) {
    int type, l, r;
    cin >> type >> l >> r;
    if (type == 1) {
      cout << prefix[r] - prefix[l-1] << '\n';
    } else if (type == 2){
      // cerr << '\n';
      // for (auto it: prefix1) { // no effect
      //   cerr << it << ' '; // ostream
      // }
      // cout << prefix1[r] << '-' << prefix1[l-1] << endl;
      cout << prefix1[r] - prefix1[l-1] << '\n';
     
    }
  }
  return 0;
}