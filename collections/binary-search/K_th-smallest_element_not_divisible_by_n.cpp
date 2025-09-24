#include <bits/stdc++.h>
using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
using ll = long long;

int n, k;

bool f(ll x) {
  return (x - x/n) >= k;
}
int main() {
  getsuga tensho;
  int tt;
  cin >> tt;
  while (tt--) {
    cin >> n >> k;
    ll l = 0; ll r = 2e9, ans = 1;
    while (l <= r) {
      int mid = l + (r-l)/2;
      if (f(mid)) {
        ans = mid;
        r = mid - 1;
      } else {
        l = mid + 1;
      }
    }
    cout << ans << '\n';
  }
  
  return 0;
}