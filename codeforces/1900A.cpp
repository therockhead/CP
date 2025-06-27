/*
	@uthor: TheRockHead

	Approach: 
	searched the WoW pattern, 
	if found then it will always be count = 2,
	otherwise for every dot, there will be count += 1
*/



#include <bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;
int main() {
	int test;
	cin >> test;
	while(test--) {
		int n;
		cin >> n;
		string cells;
		cin >> cells;
		int count = 0;
		for (int i = 0; i < n; i++) {
			if ((cells[i] == '.' && cells[i-1] == '.'
				&& cells[i+1] == '.' && i+1 < n)) {
				cells[i] = '.';
				cells[i+1] = 'w';
				cells[i-1] = 'w';
				count = 2;
				break;
			}
			else if (cells[i] == '.'){
				count += 1;
			}

		}

		cout << count << endl;

	}
}
