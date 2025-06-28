#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, k; cin >> n >> k;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  vector<int> queries(k);
  for (int i = 0; i < k; i++) {
    cin >> queries[i];
  }

  for (int i = 0; i < k; i++) {
    int target = queries[i];

    int start = 0;
    int end = n-1;
    int mid = (start+end)/2;

    bool found = false;
    while(start <= end) {
      if (target > v[mid]) {
        start = mid +1;
        mid = (start + end)/2;
      }
      else if (target < v[mid]) {
        end = mid-1;
        start = start;
        mid = (start + end)/2;
      }
      else if (target == v[mid]) {
        cout << "YES" << endl;
        found = true;
        break;
      }
    }
    if(!found) {
      cout << "NO" << endl;
    }
  }
  return 0;
}