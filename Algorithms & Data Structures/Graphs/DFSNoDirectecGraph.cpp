#include <bits/stdc++.h>

using namespace std;
//if the graph is not weighed, used vector<vector<int>> instead
void dfs(int u, const vector<vector<pair<int, int>>>& adj, vector<bool>& visited) {
    visited[u] = true;

    for (auto [v, w] : adj[u]) {
        if (!visited[v]) {
            dfs(v, adj, visited);
        }
    }
}
