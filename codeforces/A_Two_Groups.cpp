/**
 *    author:  TheRockHead
 *    created: 10.09.2025 22:58:32
**/

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define MAX 1e9+7

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    ll diff = 0;
    for (int i = 0; i < n; i++) {
      ll val;
      cin >> val;
      diff+=val;
    }
    if (diff < 0) diff *= -1;
    cout << diff << '\n';
  }

  return 0;
}