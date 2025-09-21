#include <bits/stdc++.h>
using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
using ll = long long;

int main() {
  getsuga tensho;
  int tt;
  cin >> tt;
  while (tt--) {
    ll s, a, b, c;
    cin >> s >> a >> b >> c;
    cout << (s/c) + (((s/c)/a) * b) << '\n'; 
  }
  
  return 0;
}
