/**
*    author:  TheRockHead
*    created: 07.09.2025 14:55:55
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
    int sum = 0;
    vector<int> v(n-1);
    for (int i = 0; i < n-1; i++) {
      cin >> v[i];
      sum += v[i];
    }
    sum = -1 * sum;
    cout << sum <<  '\n';
  }

  
  return 0;
}