#include <bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;
int main() {
 int n; cin >> n;
 ll operations = 0;
 // Time Complexity O(n*logn)
 for (int i = 1; i <= n; i++) {
  for (int j = i; j <= n; j += i) {
    operations++;
  // when i = 1, j-loop runs n/1 times as j is getting increased by i = 1
  // when i = 2, j-loop runs n/2 times as j is getting increased by i = 2
  // when i = 3, j-loop runs n/3 times as j is getting increased by i = 3
  //......

    //n/1 + n/2 + n/3 +...
    // n(1 + 1/2 + 1/3 +....)
    // (1 + 1/2 + 1/3 +....)-> harmonic series with a time complexity of O(log(n))

    // so the total time complexity = O(n*logn)
  }
 }
 cout << operations << '\n';

 operations = 0;
 ll sum = 0;
 for (int i = 1; i <= n; i++) {
  for (int j = 1; i*j <= n; j++) {
    operations++;
    // sum += i*j;
  }
 }

 cout << operations << '\n';
 // cout << sum << '\n';
 return 0;
}
