/**
*    author:  TheRockHead
*    created: 12:09:2025 23:30:01
**/
#include <bits/stdc++.h>

using namespace std;
#define pb push_back
constexpr long long MOD = 1000000007LL;
typedef long long ll;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tt; cin>>tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> arr(n+1);
    for (int i = 1; i <= n; i++) {
      cin >> arr[i];
    }
    bool flag = false;
    
    for (int i = 2; i <= n; i++) {
      if (arr[i] == arr[i-1]) {
        flag = true;
      } else {
        flag = false; break;
      }
    }
    vector<int> pre(n + 1);
    pre[0] = 0;
    
    for (int i = 1; i <= n; i++) {
      pre[i] = pre[i-1] + arr[i];
    }
    if (flag == true) {
      cout << "NO\n";
    }
    else {
      cout << "YES\n";
      sort(arr.rbegin(), arr.rend());
      if (arr[0] == arr[1]) {
        for (int i = 2; i < n; i++) {
          if (arr[i] < arr[0]) {
            swap(arr[i], arr[0]);
            break;
          }
        }
      }
      for (int i = 0; i < n; i++) cout << arr[i] << ' ';
      cout << '\n';
      
    }
    // for (auto it: pre) cerr << it << ' ';
    // cerr << '\n';
    // for (auto it: arr) cerr << it << ' ';
    

  }
  return 0;
}