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
  // time limit per test 1s
  // we know 1s means 10^8 operations
  // test case for this prob 10^4 max
  // in every test case, operation number:
  // (10^8)/10^4 = 10^4
  int t;
  cin >> t;
  while (t--) { //10^4
    ll n; // 2*10^5
    cin >> n;
    vector<ll> a(n), b(n);
    
    for(ll i = 0; i < n; i++){
      cin >> a[i];
    } 
    for(ll i = 0; i < n; i++){ 
      cin >> b[i];
    }
  
    vector<ll> long_a(2*n+1, 0);
    vector<ll> long_b(2*n+1, 0);
    
    ll cnt = 1;
    for (ll i = 1; i < n; i++) {
      if (a[i] == a[i-1]) {
        cnt++;
      }
      else {
        long_a[a[i-1]] = max(long_a[a[i-1]], cnt);
        cnt= 1;
      }
    }
    long_a[a[n-1]] = max(long_a[a[n-1]], cnt);

    cnt = 1;

    for (ll i = 1; i < n; i++) {
      if (b[i] == b[i-1]) {
        cnt++;
      }
      else {
        long_b[b[i-1]] = max(long_b[b[i-1]], cnt);
        cnt = 1;
      }
    }

    long_b[b[n-1]] = max(long_b[b[n-1]], cnt);

    ll max_freq = -1;
    for (int i = 1; i <= 2*n; i++) {
      max_freq = max(max_freq, long_a[i] + long_b[i]);
    }

    cout << max_freq << '\n';

  }
  return 0;
}