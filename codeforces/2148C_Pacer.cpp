/**
*    author:  TheRockHead
*    created: 13.09.2025 21:19:58
**/
/* Interesting problem :))
link: https://codeforces.com/contest/2148/problem/C
*/

// change state whenever there is mispatch with position


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
    int n, m;
    cin >> n >> m;
    int ans = m;
    int f = 1;
    for (int i = 0; i < n; i++) {
      int a, b;
      cin >> a >> b;
      if (f == 1 && !(a % 2 == b % 2) && b != m) {
        ans--;
        f = 2;
      }
      else if (f == 2 && (a%2 == b%2) && b != m) {
        ans--;
        f = 1;
      }
    }

    cout << ans << '\n';
   }
    
    // cout << ans << '\n';
}
