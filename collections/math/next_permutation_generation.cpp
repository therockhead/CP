#include <bits/stdc++.h>
using namespace std;

int main () {

	// int arr[] = {2, 3, 1};
	// next_permutation(arr, arr+3); 
	// returns next lexicograhical order of a permutation
	// for (int i = 0; i < 3; i++) {
	// 	cout << arr[i] << ' '; // gives 3 1 2
	// }

	int n; cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	next_permutation(arr, arr+n);

	for (auto it: arr) {
		cout << it << ' ';
	}

	return 0;
}