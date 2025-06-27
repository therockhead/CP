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
    int n; cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    ll value = a[0];
    for (int i = 1; i < n; i++) {
      value = (value ^ a[i]); // total xor
    }
    if (n % 2 == 0) { // even case
      if (value == 0) {
        cout << 0 << endl; // print any int
      }
      else {
        cout << -1 << endl; 
        // not zero so can not take any integer to make it zero
      }
    }
    else if (n%2 != 0) { // odd case
      if (value != 0) {
        cout << value << endl; // paired up (a1^a1) ^ (a2^a2) ^ ... = 0 ^ 0 ^... 
      }
      else {
        cout << 0 << endl;
      }
    }
  }
  return 0;
}