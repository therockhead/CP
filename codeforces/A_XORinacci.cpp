/**
*    author:  TheRockHead
*    created: 14.09.2025 21:19:21
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
    int a, b, n;
    cin >> a >> b >> n;
    if (n % 3 == 0) { cerr << n % 3 << '\n';
      cout << a << '\n';
    }
    else if (n%3 == 1) { cerr << n % 3 << '\n';
      cout << b << '\n'; 
    }
    else if (n%3 == 2) { cerr << n % 3 << '\n';
      cout << (a^b) << '\n';
    }
  }  
  
  return 0;
}