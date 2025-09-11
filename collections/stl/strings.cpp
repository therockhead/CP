#include <bits/stdc++.h>

using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  // initialization
  string str = "Hello";
  string s(5, 'a');
  cout << str << '\n'; // Hello
  cout << s << '\n'; // aaaaa

  // insert char at the end
  s.push_back('b'); // aaaaab;
  cout << s << '\n'; 

  
  // remove char at the end
  s.pop_back(); // aaaaa
  cout << s << '\n';

  
  // check if the string is empty or not
  cout << s.empty() << endl; // returns boolean/1 or 0

  
  // clear the whole string
  str.clear(); // "Hello" -> ""

  // front el
  cout << s.front() << endl; // a
  s.front() = 'b'; // 'a' -> 'b'
  cout << s << '\n'; // 'baaaa'

  // back el
  cout << s.back() << '\n';

  // substring
  string sub_s = s.substr(2); // from 2nd index, all
  cout << sub_s << '\n'; // aaa

  string sub_s2 = s.substr(2, 2); // aa
  cout << sub_s2 << '\n';


  // find the first occurance of a substring
  int pos = s.find("ba"); // 0
  cout << pos << '\n';
  cout << s.find('a') << '\n'; // 1


  // find the last occurence
  int last_pos = s.rfind("a");
  cout << last_pos << '\n';


  // Append a string p - TIME [O(len(p))]
  // basically means pushing back in the string
  string name = "Asif";
  name += " Zaman";
  cout << name << '\n';


  // concatenate two strings S & P -- TIME O(lenS + lenP)
  // first copies whole S and then appends P
  // not efficient approach of adding strings
  name = name + " Zisan";
  cout << name << '\n';


  // converting C-String to C++String
  char ar[] = "Hello"; // has '\0'
  string arr = string(ar);
  cout << arr << '\n';


  return 0;
}