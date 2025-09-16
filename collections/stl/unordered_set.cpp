/**
*    @author:  TheRockHead
*    created: 16.09.2025 21:36:12
**/
#include <bits/stdc++.h>

#define MAX 1000000007
#define pb push_back
typedef long long ll;

using namespace std;

void print(unordered_set<int> us) {
	cout << "unordered_set: ";
	for (auto it: us) {
		cout << it << ' ';
	}
	cout << '\n';
}

int main() {
	ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // declaration
	unordered_set<int> us;

	// get new elements inserted to the front
	// not ordered or sorted
	us.insert(10);
	us.insert(5);
	us.insert(50);
	us.insert(20);

	print(us);


/// ALL OTHER FUNCTIONS ARE SAME AS SET...... 
	
	
	return 0;
}