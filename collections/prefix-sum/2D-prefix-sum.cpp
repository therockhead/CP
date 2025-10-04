// https://usaco.guide/silver/more-prefix-sums?lang=cpp#2d-prefix-sums

#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
int a[N][N], prefix[N][N];

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1] + a[i][j];
			cout << prefix[i][j] << ' ';
		}
		cout << '\n';
	}

	// some queries
	// l position and r position 
	int q; cin >> q;
	while (q--) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		int ans = 0;
		ans = prefix[x2][y2] - prefix[x1-1][y2] - prefix[x2][y1-1] + prefix[x1-1][y1-1];
		cout << ans << '\n';
	}

	return 0;
}