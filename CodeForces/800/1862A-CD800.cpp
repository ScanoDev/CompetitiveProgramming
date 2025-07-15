#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<vector<char>> carp(n, vector<char>(m));

        for(int i = 0; i < n; i++){
            string s;
            cin >> s;
            for(int j = 0; j < m; j++){
                carp[i][j] = s[j];
            }
        }

        string target = "vika";
        int pos = 0;
        for(int col = 0; col < m && pos < 4; col++){
            for(int row = 0; row < n; row++){
                if(carp[row][col] == target[pos]){
                    pos++;
                    break;
                }
            }
        }

        cout << (pos == 4 ? "YES" : "NO") << endl;
    }

    return 0;
}
