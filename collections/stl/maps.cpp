/**
*    @author:  TheRockHead
*    created: 16.09.2025 21:59:22
**/
#include <bits/stdc++.h>
using namespace std;

// MAPS - {key, value}
// key must be unique

void print(map<int, string> mp) {
	// for (auto it = mp.begin(); it != mp.end(); it++) {
	// 	cout << (*it).first << ' ' << (*it).second << '\n';
	// }
	for (auto x: mp) {
		cout << x.first << ' ' << x.second << '\n';
	}
	cout << '\n';
}

int main() {
	ios::sync_with_stdio(false);
  cin.tie(nullptr);
	
	// declaration
	// arrays can't be used as keys
	map<int, string> mp;

	// insertion O(logn)
	mp.insert({1, "Asif"});
	mp.insert({3, "Zisan"});
	mp.insert({2, "Zahin"});

	mp[4] = "Zaha";
	mp[5] = "Awsaf";
	mp[6] = "Raki";

	print(mp);

	// accessing - O(logn)
	cout << mp[4] << '\n';
	cout << mp[1] << '\n';

	// size() - O(1)
	cout << mp.size() << '\n'; 

	// lower_bound - O(logn)
	auto it = mp.lower_bound(3); // at least key has 3 in it
	cout << (*it).first << ' ' << (*it).second << '\n';


	// upper_bound - O(logn)
	auto itt = mp.upper_bound(3); // immediate larger key 
	cout << (*itt).first << ' ' << (*itt).second << '\n';


	// erase()- O(logn)
	mp.erase(2); // erases key 2 and its value
	print(mp);


	// find(), erase() - O(logn)
	auto ittt = mp.find(3);
	mp.erase(ittt);
	print(mp);

	// find() check if it exists or not - O(logn)
	if (mp.find(2) != mp.end()) {
		cout << "Yes. found" << '\n';
	}
	else cout << "Not found" << '\n'; // executed as key 2 was erased erlier

	// empty()- O(1)
	cout << mp.empty() << '\n'; // 0 (false)


	// clear()- O(n)
	mp.clear();
	cout << mp.empty() << '\n'; // 1 (true)

	return 0;
}