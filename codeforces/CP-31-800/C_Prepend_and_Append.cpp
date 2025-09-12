/**
*    author:  TheRockHead
*    created: 12:09:2025 23:00:29
**/
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define MAX 1000000007LL 

int main() {
  // ios::sync_with_stdio(false);
  // cin.tie(nullptr);

  int tt; 
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      if (str[i] == '1' && str[n-i-1] == '1') break;
      else if (str[i] == '0' && str[n-i-1] == '0') break; 
      else if ((str[i] == '1' && str[n-i-1] == '0') 
        || (str[i] == '0' && str[n-i-1] == '1')) {
         cnt+=2;
        } 
    }
    // cout << str << '\n';
   
    if (cnt > n) cout << 0 << '\n';
    else if (cnt != n) cout << n-cnt << '\n'; 
    
  }

  return 0;
}