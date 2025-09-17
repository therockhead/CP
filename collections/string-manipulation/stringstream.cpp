#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  // cin >> s;
  getline(cin, s);

  stringstream ss(s);
  
  string word;
  while (ss >> word) {
    cout << word << '\n';
  }

  string numbers = "12 132  000 78 777 3232 1";
  int a, b, c, d, e, f, g;
  stringstream numss(numbers);
  numss >> a >> b >> c >> d >> e >> f >> g;
  cout << a << ' ' << b << ' ' << c << ' '  << d << ' ';
  cout << e << ' ' << f << ' ' << g << '\n';

  return 0; 
}