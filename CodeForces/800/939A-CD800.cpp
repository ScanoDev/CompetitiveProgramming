#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<vector<int>> adj(n);
    for(int i = 0; i < n; i++){
        int f;
        cin >> f;
        f--;
        adj[i].push_back(f);
    }
    bool love = false;
    for(int i = 0; i < n-2; i++){
        int p2 = adj[i][0];
        int p3 = adj[p2][0];

        if(adj[p3][0] == i){
            love = true;
        }
    }
    if(love == true) {
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}
//1 ---- 6
