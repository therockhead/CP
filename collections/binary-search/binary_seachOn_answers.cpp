/**
*    @author:  TheRockHead
**/

//https://codeforces.com/contest/1201/problem/C

#include <bits/stdc++.h>
using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
using ll = long long;

const int N = 2e5 + 9;
vector<int> a(N);
int n, k;
bool check(ll x) {
	ll ops = 0; // minimum_operation
	for (int i = (n+1)/2; i <= n; i++) {
		if (a[i] < x) {
			ops += x - a[i];
		}
	}
	return ops <= k;
}
int main() {
  getsuga tensho;
  cin >> n >> k;
  for (int i = 1; i <= n; i++) {
  	cin >> a[i];
  }
  sort(a.begin()+1, a.begin()+n+1);
  int x = 0, ans = 0;
  // while (check(x)) {
  // 	ans = x;
  // 	x++;
  // }
  int l = 0, r = 2e9;
  while (l <= r) {
  	ll mid = 1LL * (l + (r - l)/2);
  	if (check(mid)) {
  		ans = mid;
  		l = mid + 1;
  	} else {
  		r = mid - 1;
  	} 
  }
  cout << ans << '\n';
  
  return 0;
}
