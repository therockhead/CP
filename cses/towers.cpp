// author: TheRockHead
// problem link: https://cses.fi/problemset/task/1073/

#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 9;
int a[N];

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	multiset<int> tower_tops;
	for (int i = 1; i <= n; i++) {
		auto it = tower_tops.upper_bound(a[i]);
		if (it != tower_tops.end()) {
			tower_tops.erase(it);
		}
		tower_tops.insert(a[i]);
	}
	cout << tower_tops.size() << '\n';
	return 0;
}
// O(n log n)
