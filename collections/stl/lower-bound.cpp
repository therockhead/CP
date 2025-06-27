// @uthor: asif aka TheRockHead

/*
    * lower_bound() uses binary search → O(log n) per query.
    * Total time: O(n log n) (for sorting) + O(q log n) for queries.
    * Much faster than find()'s  O(n × q) approach.

*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int q;
    cin >> q;
    while (q--) {
        int y;
        cin >> y;

        // Lower bound is a function that can be used with a sorted vector
        // returns the first occurance of value 'y' to the 'it' iterator
        auto it = lower_bound(v.begin(), v.end(), y);
        
        // now,
        // if the iterator found first occurance and the dereference value (*it) is equal to y,
        // then y is present
        if (it!=v.end() && *it == y) {
            cout << "Yes " << distance(v.begin(), it) + 1 << '\n'; 
        }
        else {
            cout << "No " << (it - v.begin() + 1) << '\n';
        }
    }

    return 0;
}
