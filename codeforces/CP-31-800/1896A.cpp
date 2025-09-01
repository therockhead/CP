/* @uthor: TheRockHead */
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define MAX 1e9
 
int main () {
	int tt;
	cin >> tt;
	while (tt--) {
		int n; cin >> n;
		int v[n];
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		if (v[0] == 1) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
