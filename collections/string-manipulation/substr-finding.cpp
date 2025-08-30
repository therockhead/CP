#include <bits/stdc++.h>
using namespace std;
bool check_subStr(string main_str, string s) {
  if (main_str.size() < s.size()) {
    return false;
  }
  else {
    for (int i = 0; i < main_str.size() - s.size(); i++) {
      if (main_str.substr(i, s.size()) == s) return true;
    }
    return false;
  }
}

int main () {
  string s = "ababac"; // the substring
  string main_str = "adadasdasedawdawdasababacadada";

  cout << check_subStr(main_str, s) << '\n';
  return 0;
}
