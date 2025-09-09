#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define MAX 1e9+7

int main() {
	ios::sync_with_stdio(false);
  cin.tie(nullptr);
	
	int tt; cin >> tt;
	while (tt--) {
		int a, b, c;
		cin >> a >> b >> c;

		if (a == b && b == c && a % 2 == 0) {
			cout << "Second\n";
		}
		else if (a == b && b == c && a % 2 == 1) {
			cout << "First\n";
		}
		else if (a + c > b + c){
			cout << "First\n";
		}
		else if (a + c < b + c) {
			cout << "Second\n";
		}
		else if (a == b && (c % 2 == 1)) {
			cout << "First\n";
		}
		else if (a == b && (c % 2 == 0)) {
			cout << "Second\n";
		}
	}
	
	return 0;
}