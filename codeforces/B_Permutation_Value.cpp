/**
 *    author:  TheRockHead
 *    created: 10.09.2025 23:18:50
**/
// https://codeforces.com/problemset/problem/1743/B

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define MAX 1e9+7

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
      cout << i << ' ';
    }
    cout << 1 << '\n';
  }
  return 0;
}

// so my idea was
// what I found ? 
// -> always same number of value except ascending sorting one
// n == 6
// 2 3 4 5 6 1
// 2 3 4 6 1 5
// in all cases, {1} and {whole permutatio} adds to the value