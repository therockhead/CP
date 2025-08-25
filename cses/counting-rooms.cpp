/*@uthor: TheRockHead*/
#include <bits/stdc++.h>
using namespace std;

void bfs(int row, int col, vector<vector<char>> &adj, vector<vector<int>> &vis) {
  int n = adj.size();
  int m = adj[0].size();

  queue<pair<int, int>> q;

  if (vis[row][col] != 1) vis[row][col] = 1;

  q.push({row, col});
  
  while (!q.empty()) {
    int r = q.front().first;
    int c = q.front().second;
    q.pop();

    int del_row[] = {-1, 0, 1, 0};
    int del_col[] = {0, 1, 0, -1};

    for (int i = 0; i < 4; i++) {
      
        int nrow = r + del_row[i];
        int ncol = c + del_col[i];

        if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] == 0 && adj[nrow][ncol] == '.') {
          vis[nrow][ncol] = 1;
          q.push({nrow, ncol});
        }
         
      
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, m;
  cin >> n >> m;
  vector<vector<char>> adj(n, vector<char>(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> adj[i][j];           
    }
  }
  vector<vector<int>> vis(n, vector<int>(m,0));
  int cnt = 0; 
  for (int row = 0; row < n; row++) {
        for (int col = 0; col < m; col++) {
            if (!vis[row][col] && adj[row][col] == '.') {
                cnt++;
                bfs(row, col, adj, vis);
            }
        }
  }

  cout << cnt << endl;
  return 0;
}
