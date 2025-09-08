/**
*    author:  TheRockHead
*    created: 08:09:2025 16:05:27
**/
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define MAX 1000000007LL 

int main() {
  // #ifndef ONLINE_JUDGE
  //   freopen("input.txt", "r", stdin);
  //   freopen("output.txt", "w", stdout);
  // #endif

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  int bacteria = 0;
  while (n) {
    n = n & (n-1);
    bacteria++;
  }
  cout << bacteria << '\n';
  return 0;
}