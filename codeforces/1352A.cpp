// https://codeforces.com/problemset/problem/1352/A

/*@uthor: TheRockHead*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int test; cin >> test;
  while (test--) {
    int n; cin >> n;
    vector<int>v;
    int i = 1;
    while (n != 0) {
      int digit = n % 10;
      int temp = i * digit;
      if (temp != 0) v.push_back(temp);
      n = n/10;
      i = i*10;
    }
    cout << v.size() << '\n';
    for (auto it: v) {
      cout << it << ' ';
    }
    cout << '\n';
  }
}
