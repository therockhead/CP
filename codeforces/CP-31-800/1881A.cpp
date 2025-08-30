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
		int n, m; 
		cin >> n >> m;

		string x, s;
		cin >> x >> s;

		int i = 0;

		if (x.find(s) != string::npos && x.size() >= s.size()) {
			cout << 0 << '\n';
		}
		else {
			int cnt = 0;
			
			while (i <= 5) {
				cnt++;
				x += x;
				int res = x.find(s);
				if (res != string::npos) {
					cout << cnt << '\n';
					break;
				}
				if (i == 5 && x.find(s) == string::npos) cout <<  -1 << '\n';
				i++;
			}
		}
	}

	return 0;
}
