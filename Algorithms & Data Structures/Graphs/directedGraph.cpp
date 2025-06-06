#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    // Directed graph
    vector<vector<int>> adj(n);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        u--; v--; // si los nodos estan 1-indexados
        adj[u].push_back(v); //u conecta a v (u->v)
        
    }


    return 0;
}