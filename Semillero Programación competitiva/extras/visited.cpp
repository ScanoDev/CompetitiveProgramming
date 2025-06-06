#include <bits/stdc++.h>

using namespace std;

const int nax = 1000;
int dx [] = {0, 0, -1, 1};
int dy [] = {-1, 1, 0, 0};
char mat[nax][nax];
int visitado[nax][nax], n, m;

bool inbounds(int i, int j){
    return i>= 0
}
void dfs(int i, int j){
    visitado[i][j] = true;
    for(int k = 0; k < 4; k++){
        int x = i+dx[k], y = k+dy[k];
        if(inbounds(x,y) && ,ay[x][y] != '#'){
            dfs(x,y);
        }
    }

}

int main(){
    int n,m;
    cin >> n >> m;
    char mat[n][m];
    int visitado[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat[i][j];
            visitado[i][j] = 0;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mat[i][j] == '.' && !visited){
                dfs(i, j);
                islas++;
            }
        }
    }
    cout << islas;

    return 0;
}