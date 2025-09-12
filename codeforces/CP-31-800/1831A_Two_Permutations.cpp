/**
*    author:  TheRockHead
*    created: 12:09:2025 14:27:48
**/
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define MAX 1000000007LL 

int main() {
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      cout << (n+1) - a[i] << ' ';
    }
    cout << '\n';
  }
 
  return 0;
}