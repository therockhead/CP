/*Author: TheRockHead*/

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define MAX 1e9+7

long long fact(int n) {
  if (n == 0) return 1;
  else{
    return n*fact(n-1) % 1000000007;
  } 
}
int main() {
  int t; cin >> t;
  while (t--) {
    int n;
    cin >> n;
    cout << 1LL* fact(n) % 1000000007 << '\n';
  }

  return 0;
}
