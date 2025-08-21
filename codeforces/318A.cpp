// https://codeforces.com/problemset/problem/318/A

#include <bits/stdc++.h>
using namespace std;
int main() {
 long long n, k;
 cin >> n >> k;
 if (n % 2 != 0){
  if (k == (n/2+1)) {
    cout << n << '\n';
  }
  else if (k == 1) {
    cout << 1 << '\n';
  }
  else if(k < (n/2 + 1)) {
    long long int dif = (n/2+1) - k;
    cout << n - (2*dif) << '\n';
  }
  else if(k > (n/2+1)) {
    long long int dif = k - (n/2+1);
    cout << 2*dif << '\n';
  }
 } 
 else {
  if (k == n/2) cout << n - 1 << '\n';
  else if (k < n/2) {
    long long int odd = n - 1;
    long long int dif = n/2 - (k);
    cout << odd - (2*dif) << '\n';
  }
  else if (k > n/2) {
    long long int dif = k - n/2;
    cout << 2*dif << '\n';
  }
 }

 return 0;
}
