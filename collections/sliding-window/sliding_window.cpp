// Sliding Window Technique

/** Given a list of n integers. 
  * Have to find the sum of first k integers
  * Then sum of next k integers and so on 
*/

#include <bits/stdc++.h>
using namespace std;

#define sharingan ios::sync_with_stdio(false); cin.tie(nullptr)
#define MAX 1000000007
using ll = long long;

int main() {
  sharingan;
  
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  queue<int> q;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += v[i];
    q.push(v[i]);
    if (i >= k-1) {
      cout << sum << ' ';
      sum -= q.front();
      q.pop();
    }
  }
  cout << '\n';

  return 0;
}