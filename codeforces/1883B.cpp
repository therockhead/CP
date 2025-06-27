#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i <= b; i++)
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INF_LL = 1e18;


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);


/**
 * even numbered occurances are not an issue
 * odd occurances can become issues
 * make sure x <= k+1, eigter no occurance or at most 1 occurance
*/
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    string word;
    cin >> word;

    vector<int> seq(26,0);

    for (int i = 0; i < word.size(); i++) {
      seq[word[i] - 'a'] += 1;
    }
    int cnt = 0;
    for (int i = 0; i < 26; i++) {
      if (seq[i] == 0) continue;
      else if (seq[i] % 2 ==  1) cnt++;
    }
    if (cnt <= k +1) cout << "YES\n";
    else cout << "NO\n";

  }
  return 0;
}