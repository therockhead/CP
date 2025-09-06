/**
*    author:  TheRockHead
*    created: 06:09:2025 14:15:36
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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    bool flag = false;
    for (int i = 0; i < n; i++) { 
      cin >> v[i];
      if (v[i] == k) flag = true;
    }
    if (flag) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}