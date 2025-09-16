/**
*    @author:  TheRockHead
*    created: 16.09.2025 21:36:40
**/
#include <bits/stdc++.h>

using namespace std;

void print(set<int> s) {
	cout << "set: ";
	for (auto it: s) {
		cout << it << ' ';
	}
	cout << '\n';
}
int main() {
	ios::sync_with_stdio(false);
  cin.tie(nullptr);
	
	// declaration
	set<int> s1;

	// inserting elements to set O(logn)
	s1.insert(100);
	s1.insert(10);
	s1.insert(20);
	s1.insert(100);
	s1.insert(20);

	set<int> s2;
	s2.insert(10);
	s2.insert(20);
	s2.insert(30);
	s2.insert(20);
	s2.insert(40);

	
	print(s1);  // 10 20 100 (unique + sorted asceding order)
	print(s2);

	// erase O(logn)
	s1.erase(20);
	print(s1);
	s1.insert(20);

	// erase using iterator O(1)
	s1.erase(s1.begin());
	print(s1);


	// find() O(logn)
	auto it = s1.find(20); // returns iterator
	cout << *it << '\n'; // 20
	if (it != s1.end()) {
		cout << "found\n";
	}
	else {
		cout << "Not found\n";	
	}

	// erase el using iterator O(1)
	s1.erase(it);
	print(s1); // 20 removed
	s1.insert(20); // inserted again


	// clear all elements from a set O(n)
	s1.clear();
	print(s1);


	// lower_bound O(logn)

	auto itt = s2.lower_bound(12); // return iterator
	// iterator with value at least equal to 12 and can be more than 12
	cout << *itt << '\n'; // 20
	auto ittt = s2.lower_bound(30);
	cout << *ittt << '\n'; // 30

	// upper_bound O(logn)
	auto IT = s2.upper_bound(30);
	// returns iterator 
	// the immediate index which has value greater than 30
	cout << *IT << '\n'; // 40 

	
	return 0;
}