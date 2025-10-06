#include <bits/stdc++.h>
using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
using ll = long long;

const int N = 1e4 + 5;
ll d[N][N];
ll b[N][N];
int n, m;
ll prefix[N][N];

int main() {
  getsuga tensho;
  
  cin >> n >> m;
  
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> b[i][j];
    }
  }
  
  int query; cin >> query;
  while (query--) {
    int x1, y1, x2, y2, k;
    // from (x1, y1) to (x2, y2), k value to be added
    // in that portion
    cin >> x1 >> y1 >> x2 >> y2 >> k;
    
    // difference array ta ke 0 er matrix dhore kaj korte hobe  
    d[x1][y1] += k;
    d[x1][y2+1] -= k;
    d[x2+1][y1] -= k;
    d[x2+1][y2+1] += k; 
    
    // preview of prefix array 
    for (int i = 1; i <= n; i++) {
     for (int j = 1; j <= m; j++) {
       prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i- 1][j - 1] + d[i][j];
       cout << prefix[i][j] << ' ';
     }
     cout << '\n';
    }
    
    // add the difference array with the main array
    // done adding k value to the range
    for (int i = 1; i <= n; i++) {
      for(int j = 1; j <= m; j++) {
        prefix[i][j] += b[i][j];
      }
    }
    cout << '\n';
    for (int i = 1; i <= n; i++) {
      for(int j = 1; j <= m; j++) {
        cout << prefix[i][j] << ' ';
      }
      cout << '\n';
    }
  }    
  
  return 0;
}