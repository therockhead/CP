#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstdio>

// included all the header files manually
// because the OJ had older compiler
// which could not fetch bits/stdc++.h>

using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
using ll = long long;

int main() {
  int n;  
  scanf("%d", &n);
  getchar();
  
  string s;
  
  while (getline(cin, s)) {
    vector<string> v;
    stringstream ss(s);
    string word;
    while (ss >> word) {
      v.push_back(word);
    }
    for (int i = 0; i < v.size(); i++) {
      reverse(v[i].begin(), v[i].end());
      cout << v[i] << ' '; 
    }
    cout << '\n';
  }
  
  return 0;
}
