/**
*    @author:  TheRockHead
*    created: 15.09.2025 03:40:48
**/

#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define MAX 1e9+7

int main() {
	ios::sync_with_stdio(false);
  cin.tie(nullptr);
	
	int tt;
	cin >> tt;
	while (tt--) {
		long long a, b;
		cin >> a >> b;
		// for (long long i = 0; i <= b*b; i+=b) {
		// 	cout << i << ' ';
		// }
		long long k = b;
		int i = 1;
		bool flag = false; 
		if (a % 2 == 0 && b % 2 != 0) {
			cout << "-1\n";
		}
		else if (a%2==0 && b%2==0){ 
			cout << (a*(b/2)) + (b/(b/2)) << '\n';
		}
		else if (a % 2 != 0 && (b % 2 == 0) && (b % 4 != 0)) {
			cout << "-1\n";
		}
		else if (a % 2 != 0 && (b % 2 == 0) && (b % 4 == 0)) {
			cout << (a*(b/2)) + (b/(b/2)) << '\n'; 
		}
		else if (a % 2 != 0 && b % 2 != 0) {
			cout << a*b + 1  << '\n';
		}
	}
	
	return 0;
}