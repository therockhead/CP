/**
*    author:  TheRockHead
*    created: 07.09.2025 00:43:54
**/

// Prefix Sum Basic

#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define MAX 1e9+7

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  int arr[n+1];

  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
  }

  int prefix[n+1]; // to store the prefix sums
  prefix[0] = 0;
  for (int i = 1; i <= n; i++) {
    prefix[i] = prefix[i-1] + arr[i]; 
  }
  int q; //query
  cin >> q;

  while (q--) {
    // sum from arr[l] to arr[r]
    int l, r;
    cin >> l >> r;
    l++; r++;
    cerr << arr[l] << ' ' << arr[r] << endl;
    cerr << "prefix[l-1]: " << prefix[l-1] << " prefix[r]: " << prefix[r] << endl;
    cout << prefix[r] - prefix[l-1] << endl;
  }
  
  return 0;
}