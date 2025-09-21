// https://www.spoj.com/problems/SORT2D/en/

#include <bits/stdc++.h>
using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
using ll = long long;
bool cmp(pair<int, int> a, pair<int,int> b) {
  auto [x1, y1] = a;
  auto [x2, y2] = b;
  if (x1 > x2) {
    return true;
  }
  else if (x1 == x2){
    if (y1 < y2) {
      return true;
    }
  }
  return false;
}
int main() {
  getsuga tensho;
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<pair<int, int>> points;
    for (int i = 0; i < n; i++) {
      int x, y;
      cin >> x >> y;
      points.push_back(make_pair(x, y));
    }
    sort(points.begin(), points.end(), cmp);
    reverse(points.begin(), points.end());
    for (auto [x, y]: points) {
      cout << x << ' ' << y << '\n';
    }
  }
  return 0;
}