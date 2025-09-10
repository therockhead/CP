#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define MAX 1e9+7

// memset in strings
void string_usage() {
   // memset changes byte by byte consequetively
  // O(n) but faster than using loop
  char s[] = "bbbbb";
  memset(s, 'a', 3 * sizeof(char)); 
  // memset(string, value, how_many*(sizeof(data_type)))
  // changes the string with value 
  cout << s << '\n'; // aaabb
}

// memset in int
void int_usage() {
  int arr[10];
  
  memset(arr, -1, sizeof arr); // all -1
  // for (int i = 0; i < 10; i++) cout << arr[i] << '\n';

  int a[10];
  memset(a, 0, sizeof a); // all 0
  for (int i = 0; i < 10; i++) {
    cout << a[i] << ' ';
  }
  cout << '\n';
  memset(a, -1, 5 * sizeof(int)); // first 5 -> -1
  for (int i = 0; i < 10; i++) {
    cout << a[i] << ' ';
  }

  /**ONLY 0 and -1 can be used to change**/
  memset(a, 5, sizeof a); // doesn't work 
  for (int i = 0; i < 10; i++) {
    cout << a[i] << ' ';
    cout << bitset<32>(a[i]) << '\n';
  }

  cout << bitset<32>(-1) << '\n';
  // 11111111111111111111111111111111
  cout << bitset<32>(0) << '\n';
  // 00000000000000000000000000000000


  // WHY 0 and -1?
  /*
  * 0 => 00000000000000000000000000000000
  * -1 => 11111111111111111111111111111111
  */
}

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  // int_usage();
  // string_usage();

  return 0;
}