/**
*    author:  TheRockHead
*    created: 09.09.2025 11:05:33
**/

#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define MAX 1e9+7

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt; cin >> tt;
  while (tt--) {
    int n, a, b;
    cin >> n >> a >> b;
    if (a + b <= n - 2 || (a == b && b == n)) {
      cout << "Yes\n";
    } else cout << "No\n";
  }
  return 0;
}