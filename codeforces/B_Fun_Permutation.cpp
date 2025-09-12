/**
*    author:  TheRockHead
*    created: 12:09:2025 22:43:31
**/
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define MAX 1000000007LL 

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
      cout << (n+1) - v[i] << ' ';
    }
    cout << '\n';
  }
  return 0;
}