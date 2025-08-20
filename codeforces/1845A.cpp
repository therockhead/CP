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
    int n, k, x;
    cin >> n >> k >> x;

    if (x != 1) {
      cout << "YES\n";
      cout << n << endl;
      for(int i = 0; i < n; i++)  {
        cout << 1 << ' ';
      }
      cout << '\n';
    }
    else {
      if (k == 1 || (k == 2 && n % 2 == 1)) {
        cout << "NO\n";
      }
      else {
        cout << "YES\n";
        if (n%2 == 0) {
          cout << n/2 << endl;
          for (int i = 1; i <= n/2; i++) {
            cout << 2 << " ";
          }
          cout << endl;
        }
        else {
          cout << (n-3)/2 + 1 << endl;
          for (int i = 1; i <= (n-3)/2; i++) {
            cout << 2 << " ";
          }
          cout << 3 << endl;
        }
      } 
    }
  }
  return 0;

}