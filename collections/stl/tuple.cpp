#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define MAX 1e9+7

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  // declaration
  tuple<int, double, string> t;

  // make_tuple() usage - Forming tuples
  t = make_tuple(1, 1.21, "Hello");

  // accessing elements, get<index>(tuple_name)
  cout << get<0>(t) << '\n';
  cout << get<1>(t) << '\n';
  cout << get<2>(t) << '\n';

  // for c++17 or above
  auto [x, y, z] = t;
  cout << x << '\n';
  cout << y << '\n';
  cout << z << '\n';

  // Using tie to access the elements
  // in case auto doesn't work
  // we must use tie like below
  int a; double b; string c;
  tie(a, b, c) = t;
  cout << a << '\n';
  cout << b << '\n';
  cout << c << '\n';

  // using pairs with tuple
  tuple<pair<int, int>, int, tuple<int, int>> t1 = make_tuple(make_pair(0, 1), 2, make_tuple(3, 4));
  cout << get<0>(t1).first << '\n'; // 0
  cout << get<0>(get<2>(t1)) << '\n'; // 3
  
  return 0;
}