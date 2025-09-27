// https://cses.fi/problemset/task/1161/

#include <bits/stdc++.h>
using namespace std;

#define getsuga ios::sync_with_stdio(false);
#define tensho cin.tie(nullptr);
using ll = long long;

int main() {
	getsuga tensho;
	int x, n; 
	cin >> x >> n;
	priority_queue<int, vector<int>, greater<int>> pq;
	for (int i = 0; i < n; i++) {
		int k; cin >> k;
		pq.push(k);
	}
	ll ans = 0;
	while (pq.size() > 1) {
		int x = pq.top();
		pq.pop();
		int y = pq.top();
		pq.pop();
		ans += x + y;
		pq.push(x + y);
	}	
	cout << ans << '\n';
	return 0;
}
