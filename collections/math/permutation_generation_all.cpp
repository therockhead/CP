#include <bits/stdc++.h>
using namespace std;

int main () {

  // int arr[] = {2, 3, 1};
  // next_permutation(arr, arr+3); 
  // returns next lexicograhical order of a permutation
  // for (int i = 0; i < 3; i++) {
  //  cout << arr[i] << ' '; // gives 3 1 2
  // }

  int n; cin >> n;
  int arr[n];

  // input
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr+n); // to generate all the permutations
  // if we need only permutations starting from the input permutation,
  // then sorting is not required
  // generation
  do {
    // bool exists = next_permutation(arr, arr + n);
    // if (!exists) break;
    for (auto it: arr) cout << it << ' ';
    cout << '\n'; 
  } while (next_permutation(arr, arr + n));

  return 0;
}