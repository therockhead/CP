/**
*    author:  TheRockHead
*    created: 07.09.2025 00:43:54
**/

// suffix Sum Basic

#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define MAX 1e9+7

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  int arr[n+1];

  for (int i = n-1; i >= 0; i--) {
    cin >> arr[i];
  }

  int suffix[n+1]; // to store the prefix sums
  suffix[n] = 0;
  for (int i = n-1; i >= 0; i--) {
    suffix[i] = suffix[i+1] + arr[i]; 
  }
  int q; //query
  cin >> q;

  for (int i = 0; i <= n; i++) {
    cerr << suffix[i] << ' ';
  }
  cerr << '\n';

  while (q--) {
    // sum from arr[l] to arr[r]
    int l, r;
    cin >> l >> r;
 
    // cerr << suffix[l] << ' ' << suffix[r] << endl;
    cout << suffix[n-r-1] - suffix[n-l] << endl;
  }
  
  return 0;
}