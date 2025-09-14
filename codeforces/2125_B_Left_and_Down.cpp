/**
*    @author:  TheRockHead
*    created: 15.09.2025 01:16:03
**/

#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define MAX 1e9+7

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--) {
    long long x, y, k;
    cin >> x >> y >> k;
    long long gc = gcd(x, y);
    if ((x >= 0 && x <= k) && (y >= 0 && y <= k)) {
      cout << "1\n";
    }
    else if (x/gc <= k && y/gc <= k) {
      cout << "1\n";
    }
    else cout << "2\n";
  }
  return 0;
}