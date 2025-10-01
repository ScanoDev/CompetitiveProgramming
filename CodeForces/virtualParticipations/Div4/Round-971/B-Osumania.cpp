#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<int>> v(n);
        int cont = 0;
        while(n--){
            string s;
            cin >> s;
            int k = 0;
            for(char c : s){
                k++;
                if(c == '#'){
                    v[cont].push_back(k);
                    break;
                }
            }
        }
        for(int i = v.size()-1; i >= 0; i--){
            cout << v[cont][i] << " ";
        }
        cout << endl;
        cont++;
        
    }

    return 0;
}