// @uthor: TheRockHead
// problem link: https://cses.fi/problemset/task/1630/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;
  ll ans = 0;
  vector<int> v; // to store durations
  for (int i = 0; i < n; i++) {
    int duration, deadline;
    cin >> duration >> deadline;
    v.push_back(duration);
    ans += deadline;
  }
  sort(v.begin(), v.end());
  ll finishing = 0;
  for (auto it: v) {
    finishing += it;
    ans -= finishing;
  }
  cout << ans << '\n';
  return 0;
}
