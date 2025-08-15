#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main() {
	int test;
	cin >> test;
	while(test--) {
		int n, x;
		cin >> n >> x;
		vector<int>v(n);
		int prev = 0;
		int ans = 0;
		for (int i = 0; i < n; i++) {
			cin >> v[i];
			ans = max(ans, v[i]-prev);
			prev = v[i];
		}
		ans = max(ans, 2*(x-prev));
		cout << ans << "\n";
	}
	
}
