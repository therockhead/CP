#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i <= b; i++)
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INF_LL = 1e18;


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    ll maxi = *max_element(a.begin(), a.end());
    vector<int> b, c;
    for (int i = 0; i < n; i++) {
      if (a[i] == maxi) {
        c.pb(a[i]);
      } else {
        b.pb(a[i]);
      }
    }
    if (b.size() == 0) cout << -1 << endl;
    else {
      cout << b.size() << ' ' << c.size();
      cout << endl;
      for (auto it: b) cout << it << ' ';
      cout << '\n';
      for (auto it: c) cout << it << ' ';
    }
  }
  return 0;
}