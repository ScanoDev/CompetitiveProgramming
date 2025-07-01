#include <bits/stdc++.h>

using namespace std;

const long long INF = 1e18;
struct Edge {
    int u, v, w;
};
struct Query {
    int u, v, l;
};

/*void floyd_warshall(long long n, vector<vector<long long>>& dist) {
    for (int k = 1; k <= n; ++k)
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= n; ++j)
                if (dist[i][k] < INF && dist[k][j] < INF)
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
}*/


int main(){
    int n, m;
    cin >> n >> m;
    vector<Edge> edges(m);
    vector<vector<long long>> dist(n+1, vector<long long>(n+1, INF));
    for(int i = 1; i <= n; i++){
        dist[i][i] = 0;
    }
    for(long long i = 0; i < m; i++){
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
        dist[edges[i].u][edges[i].v] = min(dist[edges[i].u][edges[i].v], (long long)edges[i].w);
        dist[edges[i].u][edges[i].v] = min(dist[edges[i].v][edges[i].u], (long long)edges[i].w);
    }
    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(dist[i][k] != INF && dist[k][j] != INF){
                    dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
                }
            }
        }
    }
    int q;
    cin >> q;
    vector<Query> queries(q);
    vector<vector<long long>> max_l(n+1, vector<long long>(n+1, 0));

    for(int i = 0; i < q; i++){
        cin >> queries[i].u >> queries[i].v >> queries[i].l;
        max_l[queries[i].u][queries[i].v] = max(max_l[queries[i].u][queries[i].v], (long long)queries[i].l);
        max_l[queries[i].u][queries[i].v] = max(max_l[queries[i].v][queries[i].u], (long long)queries[i].l);
    }
    vector<vector<long long>> max_rem(n + 1, vector<long long>(n + 1, -1));
    for (int j = 1; j <= n; ++j) {
        for (int i = 1; i <= n; ++i) {
            for (int k = 1; k <= n; ++k) {
                if (max_l[k][j] > 0 && dist[k][i] != INF) {
                    max_rem[i][j] = max(max_rem[i][j], max_l[k][j] - dist[k][i]);
                }
            }
        }
    }
    int useful_edges_count = 0;
    for (const auto& edge : edges) {
        int u = edge.u;
        int v = edge.v;
        int w = edge.w;
        bool is_useful = false;

        for (int end_node = 1; end_node <= n; ++end_node) {
            if (max_rem[u][end_node] != -1 && dist[v][end_node] != INF) {
                if (w + dist[v][end_node] <= max_rem[u][end_node]) {
                    is_useful = true;
                    break; 
                }
            }
        }
        
        if (is_useful) {
            useful_edges_count++;
        }
    }

    cout << useful_edges_count << endl;
    

    return 0;
}