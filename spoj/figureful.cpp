// https://www.spoj.com/problems/ACMCEG2B/

#include <bits/stdc++.h>
using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
using ll = long long;

int main() {
  getsuga tensho;
  int n;
  cin >> n;
  map<pair<int, int>, string> mp;
  int code1, code2; string name;
  cin >> code1 >> code2 >> name;
  mp[{code1, code2}] = name;
  for (int i = 1; i < n; i++) {
    cin >> code1 >> code2 >> name;
    if (mp.find({code1, code2}) != mp.end()) {
      mp[{code1, code2}] = name;
    }
    else {
      mp[{code1, code2}] = name;
    } 
  }
  // TESTING 
  // for (auto it: mp) {
  //   cout << it.first.first << ' ' << it.first.second << ' ' << it.second << '\n';
  // }

  int t; cin >> t;
  while (t--) {
    int c1, c2;
    cin >> c1 >> c2;
    cout << mp[{c1, c2}] << '\n';    
  }
  
  return 0;
}