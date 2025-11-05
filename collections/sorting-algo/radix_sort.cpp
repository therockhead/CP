#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 1;

ll a[N];
int cnt[10]; // to store the frequency for 10 digits (0-9)

int n;

void counting_sort(int pos) {
	memset(cnt, 0, sizeof(cnt)); // resetting cnt array value to 0
	for (int i = 1; i <= n; i++) {
		cnt[(a[i] / pos) % 10]++; // frequency counter for the digits
	}
	for (int i = 1; i < 10; i++) {
		cnt[i] = cnt[i] + cnt[i - 1]; // position array for the frequency
	} // cnt array now contains positions for each digit
  
	int output[n + 1];
	for (int i = n; i >= 1; i--) { // traversing reversely in the main array 'a'
		output[cnt[(a[i]/pos)%10]] = a[i]; // placing the actual number from 'a' in the output array 
                                        //based on position array
		cnt[(a[i]/pos)%10]--; // decreasing position by one each time
	}
	for (int i = 1; i <= n; i++) {
		a[i] = output[i];
	}
}

void radix_sort() {
	// finding  max value
	ll max_v = a[0];
	for (int i = 2; i <= n; i++) {
		if (a[i] > max_v) max_v = a[i];
	}
	for (int d = 1; max_v/d > 0; d*= 10) { // will run the number of digits in max value
		counting_sort(d); // sending position
	}
}

int main() {  
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	radix_sort();
	for (int i = 1; i <= n; i++) {
		cout << a[i] << ' ';
	}
  return 0;
}
