#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define MAX 1e9+7

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    int val, neg, pos;
    neg = 0; pos = 0;
    for (int i = 0; i < n; i++) {
      cin >> val;
      if (val == -1) neg++;
      else pos++;
    }
    int cnt = 0;
   while ((pos < neg || neg % 2 == 1)) {
    neg--; pos++;
    cnt++;
   }
   cout << cnt << '\n'; 
  }

  return 0;
}