// @uthor: asif aka TheRockHead

/*

    stringstream ss("23,4,56");
    char ch;
    int a, b, c;
    ss >> a >> ch >> b >> ch >> c;  // a = 23, b = 4, c = 56

    Here ch is a storage area for the discarded commas.
    If the >> operator returns a value, that is a true value for a conditional. Failure to return a value is false.
    Given a string of comma delimited integers, return a vector of integers.
*/

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

// the parsing func
vector<int> parseInts(string str) {
	stringstream ss(str);
    string num_str = ",";
    vector<int> numbers;
    while(getline(ss, num_str, ',')){
        numbers.push_back(stoi(num_str));
    }
    return numbers;
}

// testing
int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}