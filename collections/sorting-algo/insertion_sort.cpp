// Insertion Sort Algorithm
// @uthor: TheRockHead (Asif)

#include <bits/stdc++.h>
using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
using ll = long long;

int main() {
  getsuga tensho;
  
  int n; cin >> n;
  int a[n + 1];

  // input
  for (int i = 1; i <= n; i++) {
  	cin >> a[i];
  }

  // algorithm
  for (int i = 1; i <= n; i++) {
  	int j = i - 1;
  	int save_i = a[i]; // pick the i-th element 
  	while (j >= 1 and a[j] > save_i) { // look for the value less than a[i]
  		a[j + 1] = a[j]; // shift other values 1 place to the right side
  		j--; 
  	}
  	a[j + 1] = save_i; // insert a[i]'s value before the value less than a[i]
  }

  // print-test
  for (int i = 1; i <= n; i++) {
  	cout << a[i] << ' ';
  }
  
  return 0;
}