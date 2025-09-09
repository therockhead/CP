/**
 *    author:  TheRockHead
 *    created: 09.09.2025 20:22:48
**/

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define MAX 1e9+7

int main () {
	ios::sync_with_stdio(false);
  cin.tie(nullptr);
	int tt; cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> v(n);
		int tot = 0;
		for (int i = 0; i < n; i++) {
			cin >> v[i];
			if (v[i] == 2) tot++;
		}
		if (tot == 0) cout << "1" << '\n';
		else if (tot % 2 != 0) {
			cout << "-1\n";
		}
		else {
			int hf = tot/2; cerr << hf << '\n';
			int cnt = 0;
			int index;
			for (int i = 0; i < n; i++) {
				if (v[i] == 2) {
					cnt++;
				}
				if (cnt == hf) {
					index = i + 1;
					break;
				}
			}
			cout << index << '\n';
		}
	}  
	return 0;
}
