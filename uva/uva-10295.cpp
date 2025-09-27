#include <bits/stdc++.h>
using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
using ll = long long;

int main() {
  getsuga tensho;
  
  int m, n;
  cin >> m >> n;

  map<string, int> dictionary;

  for (int i = 0; i < m; i++) {
  	string temp; int val;
  	cin >> temp >> val;
  	dictionary[temp] = val;
  }

  for (int i = 0; i < n; i++) {
  	string str;
  	vector<string> v;
  	while (getline(cin, str)) {
  		// cerr << str << '\n';
  		if (str == ".") break;
  		stringstream ss(str);
  		string word;
  		while (ss >> word) {
  			v.push_back(word);
  		}
  	}
  	int salary = 0;
  	for (int i = 0; i < v.size(); i++) {
  		if (dictionary.find(v[i]) != dictionary.end()) {
  			salary += dictionary[v[i]];
  		}
  	}
  	cout << salary << '\n';
  }
  
  return 0;
}