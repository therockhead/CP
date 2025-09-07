/* @uthor: TheRockHead */

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define MAX 1e9

void prefixXOR(int arr[], int prefix[], int n) {
  prefix[0] = arr[0];
  for (int i = 1; i < n; i++) {
    prefix[i] = prefix[i-1] ^ arr[i];
  }
}
int main () {
  int n;  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }    
  int prefix[n+1];
  prefixXOR(arr, prefix, n);
  for (int i = 0; i < n; i++) {
    cout << prefix[i] << ' ';
  }
  return 0;
}