#include <bits/stdc++.h>

using namespace std;
using pii = pair<int, int>;

const long long INF = 1e9;
const int N = 1e5 + 7;

int n, m;
vector<int> d, p;
vector<vector<pair<int, int>>> adj;
// pair adj[][], int d[], int p[], n and m declared globally

void dijkstra(vector<vector<pair<int, int>>> &adj, int s) {
  d.assign(n + 1, INF);
  p.assign(n + 1, -1);
  d[s] = 0; // distance of starting node 0
  
  // min heap
  priority_queue<pii, vector<pii>, greater<pii>> pq;
  pq.push({d[s], s}); // pushing {distance, start_node}
  
  while (!pq.empty()) {
    int u = pq.top().second;
    int cost = pq.top().first;
    
    pq.pop();
    
    if (cost > d[u]) { // if d[u] is already minimum, no change
      continue;
    }
    
    for (auto edge: adj[u]) {
      int v = edge.first;
      int len = edge.second;
      
      if (d[u] + len < d[v]) {
        d[v] = d[u] + len;
        p[v] = u;
        pq.push({d[v], v});
      }
    }
  }
}

vector<int> restore_path(int s, int t, vector<int> const& p) {
    if (d[t] == INF) return {};
    vector<int> path;
    for (int v = t; v != s; v = p[v]) {
      path.push_back(v);
    }
    path.push_back(s);
    reverse(path.begin(), path.end());
    return path;
}


int main() {
  cin >> n >> m; adj.resize(n + 1);
  
  for (int i = 0; i < m; i++) {
    int u, v, w;
    cin >> u >> v >> w; // start, end, cost
    adj[u].push_back({v, w});
    adj[v].push_back({u, w}); // for undirected
  }
  
  dijkstra(adj, 1);
  vector<int> path = restore_path(1, n, p);
  
  if (path.empty()) {
    cout << "No path exists!!!\n";
    return 0;
  }
  
  for (auto it: path) {
    cout << it << ' ';
  }
  return 0;
}