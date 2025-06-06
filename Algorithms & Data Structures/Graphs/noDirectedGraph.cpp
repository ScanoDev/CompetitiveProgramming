#include <bits/stdc++.h>

using namespace std;


int main(){
    int n,m;
    cin >> n >> m; // n = number of vertices, m = number of edges

    // No directed graph
    vector<vector<int>> adj(n);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        u--; v--; //1-indexed
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    return 0;
}

/*

Tu grafo:
A --- B
|     |
|     |
C --- D
Donde las conexiones son: A-B, B-C, C-D, C-A
Cómo se representa con Lista de Adyacencia:
cpp// Supongamos: A=0, B=1, C=2, D=3
vector<vector<int>> adj(4);  // 4 nodos

// Conexión A-B
adj[0].push_back(1);  // A conecta con B
adj[1].push_back(0);  // B conecta con A

// Conexión B-C
adj[1].push_back(2);  // B conecta con C
adj[2].push_back(1);  // C conecta con B

// Conexión C-D
adj[2].push_back(3);  // C conecta con D
adj[3].push_back(2);  // D conecta con C

// Conexión C-A
adj[2].push_back(0);  // C conecta con A
adj[0].push_back(2);  // A conecta con C

Resultado Final:
adj[0] = {1, 2}     // A conecta con: B y C
adj[1] = {0, 2}     // B conecta con: A y C
adj[2] = {1, 3, 0}  // C conecta con: B, D y A
adj[3] = {2}        // D conecta con: C

*/

/*
// Con pesos
vector<vector<pair<int, int>>> adj(n);
for (int i = 0; i < m; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    u--; v--;
    adj[u].push_back({v, w});
    adj[v].push_back({u, w});
}
*/