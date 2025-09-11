/**
 *    author:  TheRockHead
 *    created: 11.09.2025 00:27:00
**/


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
    int x, k;
    cin >> x >> k;
    if (x % k != 0) {
      cout << 1 << '\n';
      cout << x << '\n';
    }
    else {
      int temp = 0;
      while (x != 0 && temp != x+1) {
        // cout << x << ' ' << temp << '\n';
        if (x % k != 0 && temp % k != 0) {
          cout << 2 << '\n';
          cout << x << ' ' << temp << '\n';
          break;
        }
        x--;
        temp++;
      }
    }
  }
}