#include <bits/stdc++.h>
using namespace std;

int n, m;
const int N = 1e5;
vector<bool> vis(N, false);
vector<vector<int>> adj(N);

void dfs(int i) {
    vis[i] = true;
    for (auto it: adj[i]) {
        if (vis[it] ==  false) {
            dfs(it);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> roads;
    for (int i = 1; i <= n; i++) {
        if (vis[i] == false) {
            roads.push_back(i);
            dfs(i);

        }

    }

    cout << roads.size() - 1 << '\n';
    int len = roads.size()-1;
    for (int i = 0; i < len; i++) 
        cout << roads[i] << ' ' << roads[i + 1] << '\n';

    return 0;
}

