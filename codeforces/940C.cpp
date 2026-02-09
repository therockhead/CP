//  https://codeforces.com/problemset/problem/940/C

#include <bits/stdc++.h>
using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
#define trace(x) cerr << #x << ": " << x << '\n';
using ll = long long;

int main() {
  getsuga tensho;
  
  int n, k;
  cin >> n >> k;

  string s;
  cin >> s;
  int len = s.size();
  
  char min_ch = 'z';
  char max_ch = 'a';

  set<int> se;

  for (int i = 0; i < len; i++) {
    // min_ch = min(min_ch, s[i]);
    se.insert(s[i]);  
  }

  min_ch = *(se.begin());
  string t = "";

  if (n < k) {
    t += s;
    for (int i = 0; i < (k - n); i++) {
      t += min_ch;
    }

    cout << t << '\n';
    return 0;
  }
  else {
    for (int i = k - 1; i >= 0; i--) {
      auto it = se.upper_bound(s[i]);
      if (it != se.end()) { // got the bigger one
        char nbig = *it;
        for (int j = 0; j < i; j++) {
          t += s[j];
        }
        t += nbig;
        for (int l = i + 1; l < k; l++) {
          t += min_ch;
        }

        cout << t << '\n';
        return 0;
      }
    }
  }

  cout << t << '\n';
  
  return 0;
}
