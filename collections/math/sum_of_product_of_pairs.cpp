#include <bits/stdc++.h>
using namespace std;

#define sharingan ios::sync_with_stdio(false);cin.tie(nullptr)
const int MAX = 1e9 + 7;
using ll = long long;

void precal(vector<ll> &v, vector<ll> &suffix) {
  suffix[0] = v[0];
  for (int i = v.size()-1; i >= 0; i--) {
    suffix[i] = (suffix[i+1]% MAX) + (v[i] % MAX); 
  }
}
int main() {
  sharingan;
  int n;
  cin >> n;
  vector<ll> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    v[i] = v[i] % MAX;
  }
  vector<ll> suffix(n + 1, 0);
  precal(v,suffix);

  // for (auto it: suffix) {
  //   cerr << it << ' ';
  // } 
  // cerr << '\n';
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    ll sum = 0;
    sum = v[i] * suffix[i+1];
    ans = (ans % MAX) + sum % MAX;
  }
  cout << ans % MAX << '\n';
  
  return 0;
}