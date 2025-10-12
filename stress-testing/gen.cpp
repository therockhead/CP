#include <bits/stdc++.h>
using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
using ll = long long;

int generate(int a, int b) {
  return a + rand() % (b - a + 1);
}

int main(int argc, char *argv[]) {
  srand(atoi(argv[1]));
  freopen("input.txt", "w", stdout);
  // n, m -10^5, 10^5
  ll n = generate(-1e5, 1e5);
  ll m = generate(-1e5, 1e5);
  
  cout << n << ' ' << m;
  
  return 0;
}