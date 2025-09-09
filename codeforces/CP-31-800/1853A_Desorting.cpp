/**
 *    author:  TheRockHead
 *    created: 09.09.2025 20:48:05
**/

#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define ll long long
#define MAX 1e9+7

int main () {
	ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--) {
  	int n;
  	cin >> n;
  	vector<ll> v(n);
  	for (int i = 0; i < n; i++) {
  		cin >> v[i];
  	}
  	pair<int, ll>track;
  	int min = 1000000000+1;

  	if (!is_sorted(v.begin(), v.end())) cout << 0 << '\n';
  	else {
  		for (int i = 1; i < n; i++) {
  			if (v[i] >= v[i-1] && v[i] - v[i-1] < min) {
  				min = v[i] - v[i-1];
  				track.first = i;
  				track.second = min;
  			}
  		}
  		cerr << track.first << '\n';
  		cerr << track.second << '\n';
  		cout << (v[track.first] - v[track.first-1])/2 + 1 << '\n';  
  	}
  }
  // cerr << (298407670 - 53943947)/2 << '\n';
  // cerr << (734902000 - 298407670)/2 << '\n';
	return 0;
}

/*
1
3
53943947 298407670 734902000
*/
