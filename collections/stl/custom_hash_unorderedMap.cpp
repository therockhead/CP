#include <bits/stdc++.h>
using namespace std;


struct custom_hash {
  static uint64_t splitmix64(uint64_t x) {
      x += 0x9e3779b97f4a7c15;
      x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
      x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
      return x ^ (x >> 31);
  }

  size_t operator()(uint64_t x) const {
      static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
      return splitmix64(x + FIXED_RANDOM);
  }
};

/// **UNORDERED MAP using custom hash**
int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  // declaration
  unordered_map<long long int, int, custom_hash> mp; // this will work when the key is an int or long long int

  // insertion
  mp[1] = 5; 
  mp[2] = 3;
  mp[3] = 7;
  
  for (auto it: mp) {
    cout << it.first << ' ' << it.second << '\n';
  }
  cout << '\n';

  // accessing always O(1) worst case O(n)
  cout << mp[1] << '\n'; 
	return 0;
}