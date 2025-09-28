// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=481

#include <bits/stdc++.h>
using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
using ll = long long;

int main() {
  getsuga tensho;
  int t;
  int situation = 0;
  while (cin >> t && t > 0) {
      situation++;
      cout << "Scenario #" << situation << '\n';
      int i = 0;
      map<int, int> mp;
      while (t--) {
        i++;
        int n;
        cin >> n;
        while (n--) {
          int val; cin >> val;
          mp[val] = i;
        }
      }
      // for (auto [key, value]: mp) {
      //   cerr << key << ' ' << value << '\n';
      // }
      queue<int> q;
      map<int, queue<int>> teams;

      string command;
      while (cin >> command and command != "STOP") {
        if (command == "ENQUEUE") {
          int x; cin >> x;
          int team = mp[x]; // team id
          if (!teams[team].empty()) {
            teams[team].push(x);
          }
          else {
            q.push(team);
            teams[team].push(x);
          }
        }
        else {
          int front_team = q.front();
          cout << teams[front_team].front() << '\n';
          teams[front_team].pop();

          if (teams[front_team].empty()) {
            q.pop();
          }
        }
      }
    cout << '\n';  
  }
  
  return 0;
}
