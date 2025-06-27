// @uthor: asif

// GOAT header
#include <bits/stdc++.h>

// to use string stream when we don't use bits/stdc++ file
#include<sstream>

using namespace std;

// to understand the use of stringstream
// turns integers into string 
string intToString(int num) {
    stringstream ss;
    ss << num;
    string str_number = ss.str();
    return str_number;
}

// main func
int main() { // testing
    int n;
    cin >> n;
    cout << intToString(n) << '\n';
    return 0;
}

    