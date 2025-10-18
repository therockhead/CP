// https://cses.fi/problemset/task/1090/

#include <bits/stdc++.h>
using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
using ll = long long;

int main() {
  getsuga tensho;
  
  int n, x;
  cin >> n >> x;
  vector<ll> arr(n);
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end(), greater<ll>());
  for (int i = 0; i < n; i++) {
    cerr << arr[i] << ' ';
  }
  int cnt = 0;
  int second = n - 1;
  for (int i = 0; i <= second; i++) {
    if (arr[i] + arr[second] <= x) {
      cnt++;
      second--;
    }
    else {
      cnt++;
    }
  }
  cout << cnt << '\n';
  return 0;
}
