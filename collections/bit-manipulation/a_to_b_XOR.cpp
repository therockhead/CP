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
ll a_to_b_xor(ll a, ll b) {
  if (a > 0) {
    return (zero_to_a_xor(b) ^ zero_to_a_xor(a-1));
  }
  else {
    return zero_to_a_xor(b) ^ 0;
  }
}
int main() {
  sharingan;
  ll a, b; 
  // we have to determine
  // a to b all value XOR together
  cin >> a >> b;
  cout << a_to_b_xor(a, b) << '\n';
  return 0;
}