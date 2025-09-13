/**
*    author:  TheRockHead
*    created: 13.09.2025 13:53:14
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
    int n;
    cin >> n;
    vector<int> v(n), pre(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    bool flag = false;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (i == j) continue;
        else {
          if (gcd(v[i], v[j]) <= 2) {
            flag = true;
            break;
          }
        }
      }
    }
    if (flag) cout << "YES\n";
    else cout << "NO\n";
  }
  
  return 0;
}