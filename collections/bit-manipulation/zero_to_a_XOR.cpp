#include <bits/stdc++.h>
using namespace std;

#define sharingan ios::sync_with_stdio(false); cin.tie(nullptr)
#define MAX 1000000007
using ll = long long;

ll zero_to_a_xor(ll a) {
  ll ans = 0;
  while (a >= 0 && a % 4 != 3) {
    ans ^= a;
    a--;
  }
  return ans;
}
int main() {
  sharingan;
  ll a;
  cin >> a;
  cout << 1LL* zero_to_a_xor(a) << '\n';
  return 0;
}