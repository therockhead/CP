#include <bits/stdc++.h>
using namespace std;

void print(unordered_map<int, int> mp) {
	for (auto it: mp) {
		cout << it.first << ' ' << it.second << '\n';
	}
	cout << '\n';
}

/// **UNORDERED MAP**
int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  // declaration
  unordered_map<int, int> mp;

  // insertion
  mp[1] = 5; 
  mp[2] = 3;
  mp[3] = 7;
  print(mp);

  // accessing always O(1) worst case O(n)
  cout << mp[1] << '\n'; 
	return 0;
}