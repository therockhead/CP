#include <bits/stdc++.h>
using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
using ll = long long;

string exit_path(string s) {
  s.pop_back();
  int i = s.size()-1;
  int cnt = 1;
  while (s[i] != '/' && cnt != 2) {
    if (s[i] == '/') cnt++;
    s.pop_back();
    i--;
  }
  return s;
}

int main() {
  getsuga tensho;
 
  int n;
  cin >> n;
  string path = "/";
  while (n--) {
    string command;
    cin >> command;
    if (command == "pwd") {
      cout << path << '\n';
    }
    else if (command == "cd") {
     string next;
     cin >> next;
     if (next[0] == '/') {
      path = "/";
     }
     // cerr << next << '\n';
     queue<string> stack_folder;
     string new_str = "";
     for (int i = 0; i < next.size(); i++) {
      if (next[i] == '/') {
        next[i] = ' ';
      }
     }
     stringstream ss(next);
     string word;
     while (ss >> word) {
       stack_folder.push(word);
     }
// TESTING
     // while (!stack_folder.empty()) {
     //  cerr << stack_folder.top() << ' ';
     //  stack_folder.pop();
     // }
    while (!stack_folder.empty()) {
      if (stack_folder.front() == "..") {
           path = exit_path(path);
           stack_folder.pop();
           continue;  
      }
      path += stack_folder.front() + '/';
      stack_folder.pop();
     }
     
    }
    cerr << '\n';
  }
  
  return 0;
}
