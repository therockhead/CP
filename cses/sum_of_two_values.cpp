#include <bits/stdc++.h>
using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
using ll = long long;

int main() {
  getsuga tensho;
  int n, x;
  cin >> n >> x;
  map<int, int> mp;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
  	cin >> v[i];
  	
  }
  for (int i = 0; i < n; i++) {
  	if (mp.find(x-v[i]) != mp.end()) {
  		cout << mp[x-v[i]]+1 << ' ' << i+1<< '\n';
  		return 0;
  	}
  	mp[v[i]] = i;
  }
  cout << "IMPOSSIBLE\n";
  
  return 0;
}