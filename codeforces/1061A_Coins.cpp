/**
*    author:  TheRockHead
*    created: 08.09.2025 17:51:15
**/

#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define MAX 1e9+7

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n, s;
  cin >> n >> s;

  int temp = s;
  int cnt = 0;
  
  if(s % n == 0) cout << s/n << '\n';
  else {
      while (temp != 0) {
        if (temp <= n) {
          n = temp;
        } 
        temp = temp - n; 
        // cerr << n << ' ';
        cnt++;
      }
      cout << cnt << '\n';
  
  }
  return 0;
}