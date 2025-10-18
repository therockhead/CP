#include <bits/stdc++.h>
using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
using ll = long long;

string print_pattern(int n) {
  string str = "";
  if (n == 1) return str + "A" + str;
  return print_pattern(n - 1) + (char)('A' + (n-1)) + print_pattern(n-1); 
}
int main() {
  getsuga tensho;
  int n; cin >> n;
  string ans = print_pattern(n);
  cout << ans;
  return 0;
}
