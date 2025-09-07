/* @uthor: TheRockHead */

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define MAX 1e9

int main () {
	int n, q;
	cin >> n >> q;
	vector<int> v(n+1);
	for (int i = 1; i <= n; i++) {
		cin >> v[i];
	}
	vector<int> prefix(n+1);
	prefix[1] = v[1];
	for (int i = 2; i <= n; i++) {
		prefix[i] = prefix[i-1] ^ v[i];
	}

	while (q--) {
		int l, r;
		cin >> l >> r;
		cout <<(prefix[l-1] ^ prefix[r]) << '\n'; // we know that a ^ a = 0
        // all the values before prefix[l] gets eliminatad as, 
        // (prefix[a] ^ prefix[a])......(prefix[a+1] ^ prefix[a+1])......(prefix[l-1] ^ prefix[l-1]) 
        // results in 0^0^0^0  (but prefix[l] to prefix[r] remains)
        // so we get XOR sum from l to r

	}

	return 0;
}