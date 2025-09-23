#include <bits/stdc++.h>
using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
using ll = long long;

int main() {
  getsuga tensho;
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
  	cin >> v[i];
  }
  sort(v.begin(), v.end());
  int target; cin >> target;
  int l = 0, r = v.size()-1, mid;
  // cout << "mid:" << mid << '\n';
  // cout << v[mid];
  int ans = -1;
  while (l <= r) {
  	mid = (l + r)/2;
  	if (v[mid] == target) {
  		ans = mid;
  		r = mid - 1;
  	} else {
  		l = mid + 1;
  	}
  }
  cout << ans << '\n';
  return 0;
}
