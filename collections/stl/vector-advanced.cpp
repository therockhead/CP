#include <bits/stdc++.h>

using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> v = {1, 200, 30, -4, 50};

  // iterator declaration and usecase
  vector<int>:: iterator it;
  for (it = v.begin(); it != v.end(); it++) {
    cout << *(it) << ' ';
  } cout << '\n';


  // reverse iterator
  vector<int>:: reverse_iterator itr;
  itr = v.rbegin();
  cout << *(itr) << '\n'; // 5
  for (itr = v.rbegin(); itr!= v.rend(); itr++) {
    cout << *(itr) << ' '; // 5 4 3 2 1
  } cout << '\n';

  
  // reversing a vector
  reverse(v.begin(), v.end());
  for (auto it: v) {
    cout << it << ' ';
  } cout << '\n';

  
  // sorting a  vector
  sort(v.begin(), v.end());
  for (auto it: v) {
    cout << it << ' ';
  } cout << '\n';

  
  // find an element
  find(v.begin(), v.end(), -4);
  // returns iterator
  if (find(v.begin(), v.end(), -4) != v.end()) {
    cout << "found\n";
  } else {
    cout << "Not found\n";
  }


  // min_element
  cout << *(min_element(v.begin(), v.end())) << '\n'; // -4


  // max_element
  cout << *(max_element(v.begin(), v.end())) << '\n'; // 200

  // total sum using accumulate
  int sum = accumulate(v.begin(), v.end(), 0);
  cout << sum << '\n';

  // count occurances
  cout << count(v.begin(), v.end(), 200) << '\n'; // 2
  
  return 0;
}