#include <bits/stdc++.h>
using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
using ll = long long;

const int N = 1e5 + 9;
int a[N];

int main() {
  getsuga tensho;
  
  int n; ll s;
  cin >> n >> s;
  
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  
  int ans = 0;
  int r = 1;
  ll sum = 0;
  
  // two pointer method
  // time complexity O(n)
  for (int l = 1; l <= n; l++) {
    while (r <= n and sum + a[r] <= s) {
      sum += a[r];
      r++;
    }
    ans = max(ans, r - l);
    sum -= a[l];
  }
  cout << ans << '\n';
  return 0;
}