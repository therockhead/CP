// 2nd approach

/**
*    author:  TheRockHead
*    created: 12:09:2025 17:58:15
**/
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define MAX 1000000007LL 

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tt; cin >> tt;
  while (tt--) {
    int start_x, start_y;
    int target_x, target_y;
    cin >> start_x >> start_y;
    cin >> target_x >> target_y;
    if (target_y < start_y) { // y can't be decressed in any move
      cout << "-1\n"; continue; 
    }
    else {
      int moves = target_y - start_y;
      start_x += moves; // x + 1.. *(move 1)

      if (start_x < target_x) { 
        cout << "-1\n"; continue;
      }
      else if (start_x >= target_x) {
        moves += start_x - target_x; // move 1
      }

      cout << moves << '\n';
    }
  }
  return 0;
}