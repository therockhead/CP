// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1415

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define getsuga ios_base::sync_with_stdio(false);
#define tensho cin.tie(NULL);

int main() {
  getsuga tensho;
  
  int n, q;
  int case_no = 1;
  while (cin >> n && cin >> q) {
    if (n == 0 && q == 0) break;
    cout << "CASE# " << case_no << ":\n";
    // cout << n << ' ' <<  q << '\n';
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    // for (int i = 0; i < n; i++) {
      // cout << a[i] << ' ';
    // }
    // cout << '\n';
    
    sort(a.begin(), a.end());
    // for (int i = 0; i < n; i++) {
    //   cout << a[i] << ' ';
    // }
    // return 0;
    while (q--) {
      int x;
      cin >> x;

      int l = 0, r = a.size(), ans = -1;
      while (l <= r) {
        int mid = (l + r)/2;
        if (a[mid] == x) {
          ans = mid;
          r = mid - 1;
        }
        else if (a[mid] > x) {
          r = mid - 1;
        }
        else {
          l = mid + 1;
        }
      }

      if (ans == -1) {
        cout << x << " not found\n";
      }
      else {
        cout << x << " found at " << ans + 1 << '\n';
      }
    }
    case_no++;
  }

  return 0;
}

