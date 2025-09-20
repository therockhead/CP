/* Problem Link 
  https://codeforces.com/contest/1506/problem/D
*/
#include <bits/stdc++.h>
using namespace std;

#define sharingan ios::sync_with_stdio(false); cin.tie(nullptr)
using ll = long long;

int main() {
  sharingan;
  int tt; 
  cin >> tt;
  while (tt--) {
    priority_queue<pair<int,int>> pq;
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      mp[x]++;
    }
    for (auto it: mp) {
      pq.push(make_pair(it.second, it.first));
    }
    for (auto it: mp) {
      cerr << it.first << ' ' << it.second << '\n';
    }
    cerr << '\n';
    int len = n;
    while (pq.size() >= 2) {
      int cnt1 = pq.top().first;
      int x1 = pq.top().second;
      pq.pop();

      int cnt2 = pq.top().first;
      int x2 = pq.top().second;
      pq.pop();
      
      cnt1--;
      cnt2--;
      len -= 2;
      if (cnt1) {
        pq.push({cnt1, x1});
      }
      if (cnt2) {
        pq.push({cnt2, x2});
      }
    }
    cout << len << '\n';
  }
  return 0;
}
