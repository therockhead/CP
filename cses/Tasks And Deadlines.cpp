#include <bits/stdc++.h>
using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
#define trace(x) cerr << #x << ": " << x << '\n';
using ll = long long;

int main() {
  getsuga tensho;
  
  int n; cin >> n;
  
  vector<pair<ll, ll>> task;

  for (int i = 0; i < n; i++) {
    int a, d;
    cin >> a >> d;
    task.push_back(make_pair(a, d));
  }

  sort(task.begin(), task.end());

  ll f = 0; // finishing time
  ll reward = 0;
  for (int i = 0; i < n; i++) {
    if (i == 0) {
      reward += task[i].second - task[i].first;
      f += task[i].first;
    } 
    else {
      f += task[i].first;
      reward += (task[i].second - f);
    }
    // trace(f);
  }
  cout << reward << '\n';
  
  return 0;
}
