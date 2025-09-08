/**
*    author:  TheRockHead
*    created: 08.09.2025 17:51:15
**/

#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define MAX 1e9+7

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int val;
    cin >> val;
    int ans = val;
    for (int i = 1; i < n; i++) {
      cin >> val;
      ans = ans & val;
    }

    cout << ans << '\n';
  }  
  
  
  return 0;
}