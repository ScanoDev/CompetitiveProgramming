#include <bits/stdc++.h>

using namespace std;

const int INF = numeric_limits<int>::max();

vector<int> dijkstra(int start, const vector<vector<pair<int, int>>>& adj) {
    //int n = adj.size(); ESTO ES 0-INDEXED
    int n = adj.size()-1;
    vector<int> dist(n, INF);
    dist[start] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();

        if (d > dist[u]) continue;

        for (auto [v, w] : adj[u]) {
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    return dist;
}
