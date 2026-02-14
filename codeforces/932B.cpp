#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;

int f(int x) {
  if (x < 10) return x;
  else {
    int prod = 1;
    while (x!=0) {
      if (x % 10 != 0) {
        prod *= (x%10);
      }
      x /= 10;
    }
    return prod;
  }
}

int ok(int x) {
  int ans = 0;
  while (1) {
    x = f(x);
    string temp = to_string(x);
    if (temp.size() == 1) {
      ans = x;
      break;
    }
  }  
  return ans;
}

bool valid(int l, int r, int val) {
    return val >= l && val <= r;
}

int G[N];
vector<int> v[10];

int main() {
    for (int i = 1; i <= 1e6; i++) {
        G[i] = ok(i);
        v[G[i]].push_back(i);
    }
	int q;
	cin >> q;
	while (q--) {
        int l, r, k;
        cin >> l >> r >> k;

        cout << upper_bound(v[k].begin(), v[k].end(), r) - lower_bound(v[k].begin(), v[k].end(), l) << '\n';

        // cout << ans << '\n';
  }
	return 0;
}
