#include <bits/stdc++.h>
using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
using ll = long long;

const int N = 1e5 + 9;
int n, maximum, minimum;
int a[N];

pair<int, int> findMaxMin(int l, int r) {
	if (l == r) {
		return make_pair(a[l], a[r]);
	}
	else if (l == r - 1) {
    if (a[l] > a[r]) return make_pair(a[r], a[l]);
    else return make_pair(a[l], a[r]);
	}
  // int mid = (l + r) / 2;
  int mid = l + (r - l) / 2;
  pair<int, int> left = findMaxMin(l, mid);
  pair<int, int> right = findMaxMin(mid + 1, r);
  maximum = max(left.second, right.second);
  minimum = min(left.first, right.first);
  return make_pair(minimum, maximum);
}

int main() {
  getsuga tensho;
  cin >> n;
  for (int i = 0; i < n; i++) {
  	cin >> a[i];
  }

  pair<int, int> minmax = findMaxMin(0, n-1);

  int x =  minmax.first;
  int y = minmax.second;

  cout << x << '\n';
  cout << y << '\n';
  return 0;
}