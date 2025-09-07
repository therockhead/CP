/**
 *    author:  TheRockHead
 *    created: 08.09.2025 03:06:45
**/

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define MAX 1e9

int main () {
	ios::sync_with_stdio(false);
  cin.tie(nullptr);
	string str; cin >> str;
	int freq[4] = {0};
	int len = str.size();
	int ans = 0;
	for (int i = 0; i < len; i++) {
		if (str[i] == 'A') {
			freq[0]++;
			ans = max(ans, freq[0]);
			freq[1] = 0;
			freq[2] = 0;
			freq[3] = 0;
		}
		else if (str[i] == 'T') {
			freq[1]++;
			ans = max(ans, freq[1]);
			freq[0] = 0;
			freq[2] = 0;
			freq[3] = 0;
		}
		else if (str[i] == 'G') {
			freq[2]++;
			ans = max(ans, freq[2]);
			freq[1] = 0;
			freq[0] = 0;
			freq[3] = 0;
		}
		else {
			str[3]++;
			ans = max(ans, freq[3]);
			freq[1] = 0;
			freq[2] = 0;
			freq[0] = 0;
		}
	}
	cout << ans << '\n';


	return 0;
}