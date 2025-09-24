// @uthor: TheRockHead

//https://codeforces.com/problemset/problem/750/A
// use of Binary Search on Answers
#include <bits/stdc++.h>
using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
using ll = long long;

int n, k;

int check(int n) {
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    ans += i * 5;
  }
  return ans;
}

int main() {
  getsuga tensho;
  cin >> n >> k;

  int l = 1, r = n, ans = 0;
  int mid;
  while (l <= r) {
    mid = (l + r)/2;
    cerr << mid << '\n';
    // check returns the minutes needed for solving x problem and 
    // check(mid) + k should be less than equal to 240
    // x ta problem check(mid) poriman time lagay solve korte, then ar baki shomoy should be greater than k
    // karon baki time ta to lagbe party te jaite..
    if (check(mid) + k <= 240) { // checks if there is enough time remaining to go to the party
      ans = mid;
      l = mid + 1;
    }
    else {
      r = mid - 1;
    }
  }
  cout << ans << '\n';
  
  return 0;
}
