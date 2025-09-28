#include <bits/stdc++.h>
#include <cctype>
using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
using ll = long long;

int main() {
  getsuga tensho;
  string str;
  set<string> dictionary;
  while (cin >> str) {
  	string new_str = "";
  	for (int i = 0; i < str.size(); i++) {
  		if (isalpha(str[i])) {
  			new_str += tolower(str[i]);
  		}
  		else {
  			if (!new_str.empty()) {
  				dictionary.insert(new_str);
  			}
  			new_str = "";
  		}
  	}
  	if (!new_str.empty()) dictionary.insert(new_str);
  }
  for (auto word: dictionary) {
  	cout << word << '\n';
  }
  return 0;
}