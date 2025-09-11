#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  // declaration
  vector<int> v;
  vector<int> v1(5); // {_, _, _, _, _}
  vector<int> v2(5, 0); // {0, 0, 0, 0, 0}
  
  // insert  elements at end
  v.push_back(10);
  v.push_back(20);
  // or 
  v.emplace_back(30);

  // vector size
  cout << v.size() << '\n'; // 2
  cout << v1.size() << '\n'; // 5
  cout << v2.size() << '\n'; // 5

  // access elements
  cout << v[0] << '\n'; // 10
  cout << v1[1] << '\n'; // 0
  cout << v2[4] << '\n'; // 0
  v2[4] = 8;  // changed to 8
  cout << v2[4] << '\n'; // 8

  // sorting a vector
  vector<int> v4 = {2, 6, 4, -1};
  sort(v4.begin(), v4.end()); // sorted
  for (auto it:v4) cout << it << ' '; // -1 2 4 6
  cout << '\n';

  // removing elements
  vector<int> v5 = {2, 3, 4, 5, 9};
  v5.pop_back(); // popped 9
  cout << "all el of v5: ";
  for (auto it:v5) cout << it << ' '; // 2 3 4 5
  cout << '\n';

  // check empty or not
  vector<int> v6 = {1, 2};
  v6.pop_back(); // popped 2
  v6.pop_back(); // popped 1
  bool empty_or_not = v6.empty();
  if (empty_or_not == true) {
    cout << "v6 is empty!!!\n";
  } else {
    cout << "v6 is not empty\n";
  }

  // clears all the elements
  v5.clear(); 
  cout << "After clearing v5, v5.empty() returns" << ' ';
  cout << v5.empty() << '\n'; // 1

  // get the first element & last element
  vector<int> v7 = {4, 5, 1, 2};
  cout << "front el: " << v7.front() << '\n'; // 4
  cout << "back el: " << v7.back() << '\n'; // 2

  // get element at specific index
  cout << "v7.at(1) -> " << v7.at(1) << '\n';// 5

  // resizing a vector
  vector<int> v8 = {1, 2, 3};
  cout << "before resizing v8: size = " << v8.size() << '\n';
  v8.resize(7);
  cout << "after resizing in 7 size vector, v8 size = " << v8.size() << '\n';
  for (int i = 0; i < v8.size(); i++) cout << v8[i] << ' ';
  cout << '\n'; // 1 2 3 0 0 0 0 

  // resize with specific item
  v8.resize(9, -1); // {1, 2, 3, 0, 0, 0, 0, -1, -1}
  for (int i = 0; i < v8.size(); i++) cout << v8[i] << ' ';
  cout << '\n';


  // assign values
  vector<int> v9;
  v9.assign(5, 10); // assigning 5 el valued 10
  for (auto it: v9) cout << it << ' ';


  return 0;
}