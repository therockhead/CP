/**
*    author:  TheRockHead
*    created: 09.09.2025 00:07:54
**/

#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define MAX 1e9+7

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t; 
  cin >> t;
  while (t--) {
    int n; 
    cin >> n;
    cout << n << ' ';
    for (int i = 1; i <= n-1; i++) {
      if (i == n-1) cout << i;
      else cout << i << ' ';
    }
    cout << '\n';
  }  
  return 0;
}