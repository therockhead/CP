#include <bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;
int main() {
 int n; cin >> n;
 for (int i = 0; i < n; i++) {
  cout << "1/" << (1 << (int)(log2(i))) <<' ' <<  '+' << ' ';
 }
 cout << "....";

 return 0;
}

