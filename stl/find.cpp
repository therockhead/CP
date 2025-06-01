// @uthor: asif

/*
    Syntax: find(first, last, val);
    Time: more than lower_bound O(n) --- Linear approach
    where the lower_bound() uses O(log n) -- binary search approach
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> v = {1, 3, 6, 2, 9};

    // Search an element 6
    auto it = find(v.begin(), v.end(), 6);

	// Print index
    if (it != v.end()){
        cout << distance(v.begin(), it);
    }

    return 0;
}