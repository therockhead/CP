// Array Division
// Used - Binary Search on answer technique
// to find min max
// https://cses.fi/alon/task/1085/

#include <bits/stdc++.h>
using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
using ll = long long;

const int N = 2e5 + 9;
int n, k;
vector<int> a(N);

bool check(ll x) {
  for (int i = 1; i <= n; i++) {
    if (a[i] > x) return false;
  }
  int count = 1; // minimum subarray count
  ll curr_sum = a[1];
  for (int i = 2; i <= n; i++) {
    if (curr_sum + a[i] <= x) {
      curr_sum += a[i];
    }
    else { // if not then starts another partition
      count++;
      curr_sum = a[i];
    }
  }
  return count <= k; // if it is equal to the k
}
int main() {
  getsuga tensho;
  cin >> n >> k;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  ll l = 0, r = 2e14, ans = 0;
  while (l <= r) {
    ll mid = (l + r)/2;
    cerr << mid << '\n';
    if (check(mid)) {
      ans = mid;
      r = mid - 1;
    } else {
      l = mid + 1;
    }
  }
  cout << ans << '\n';
  
  return 0;
}
