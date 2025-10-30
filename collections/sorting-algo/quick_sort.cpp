#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
int a[N];

void interchange(int i, int j) {
  // swapping values between a[i] and a[j]
	a[i] = a[i] ^ a[j]; 
	a[j] = a[i] ^ a[j];
	a[i] = a[i] ^ a[j];
}

int partition(int m, int p) {
	int pivot = a[m], i = m, j = p;
	do {
		do {
			i++;
		} while (a[i] < pivot);
		do {
			j--;
		} while (a[j] > pivot);
		if (i < j) interchange(i, j);
	} while (i < j);
	a[m] = a[j];
	a[j] = pivot;
	return j;
}

void quick_sort(int p, int q) {
	if (p < q) {
		int j = partition(p, q + 1);
		quick_sort(p, j - 1);
		quick_sort(j + 1, q);
	}
}

int main() {
	int n = 5;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	quick_sort(0,  5 - 1);
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	return 0;
}
