/**
 *    author:  TheRockHead
 *    created: 10.09.2025 18:21:46
**/
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define MAX 1e9+7

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  double drink;
  cin >> n;
  double tot = 0;
  int save = n;
  while (n--) {
    cin >> drink;
    tot += drink;
  }
  cout << setprecision(12) << tot/(double)save << ' ';

  return 0;
}