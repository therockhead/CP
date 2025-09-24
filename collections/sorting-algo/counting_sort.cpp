#include <bits/stdc++.h>
using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
using ll = long long;

const int MAX = 1e6;
int cnt[MAX + 1];

int main() {
  getsuga tensho;
  
  // just count how many times each element is there in the array
  // and then store it serially
  // done :)

  int n;
  cin >> n;
  int a[n+1];
  for (int i = 1; i < n+1; i++) {
  	cin >> a[i];
  	cnt[a[i]]++;
  }
  for (int i = 1; i <= MAX; i++) {
  	for (int j = 1; j <= cnt[i]; j++) {
  		cout << i << ' ';
  	}
  }

  
  return 0;
}