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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;

    int var = 1;
    int mx = 0;
    int result = 0;
   
    for (int i = 1; i < s.size(); i++) {
     if (s[i] == s[i-1]) {
      var += 1;
     }
     else {
      mx = max(var, mx);
      var = 1;
     }

    }
    mx = max(var, mx);
    cout << mx+1 << endl;
    // for (auto it: st) {
    //   cout << it << ' ';
    // }
    // cout << endl;
  }
  return 0;
}