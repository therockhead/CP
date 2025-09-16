/**
*    @author:  TheRockHead
*    created: 16.09.2025 21:37:24
**/


// SORTED BUT NOT UNIQUE ELEMENTS - Multiset


#include <bits/stdc++.h>

using namespace std;

void print(multiset<int> ms) {
	cout << "multiset: ";
	for (auto it: ms) {
		cout << it << ' ';
	}
	cout << '\n';
}

int main() {
	ios::sync_with_stdio(false);
  cin.tie(nullptr);
	

  // declaration
  multiset<int> ms;

  // insertion
  ms.insert(5);
  ms.insert(2);
  ms.insert(2);
  ms.insert(5);
  ms.insert(10);
  ms.insert(9); 

  print(ms); // multiset: 2 2 5 5 9 10 

  /// ALL OTHER FUNCTIONS ARE SAME AS SET...... 

  // some cases
  // if we want to use erase(value) then, 
  // all the occurance of that value will be erased
  // that's basically a problem if we don't want to erase all

  // // multiset: 2 2 5 5 9 10 
  ms.erase(5);
  print(ms); // multiset: 2 2 9 10 

  ms.insert(5);
  ms.insert(5);

  // so to solve this issue,
  // we should use an iterator
  // find() that iterator 
  // after that erase at that point
  ms.erase(ms.find(5)); // first 5 will be erased
  print(ms); // multiset: 2 2 5 9 10 
	
	return 0;
}