/*@uthor: TheRockHead*/
 
#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int tt; cin >> tt;
  while (tt--) {
    int x; cin >> x;
    set<int> v;
    for(int i = 1; i <= sqrt(x); i++) {
      if (x % i == 0) {
        v.insert(i);
        v.insert(x/i);
      }
    }
    // for (auto it: v) {
    //   cout << it << ' ';
    // }
    // cout << '\n';
    cout << v.size() << '\n';
  }
}
