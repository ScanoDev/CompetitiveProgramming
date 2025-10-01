#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, c, t;
    cin >> t;
    while(t--){
        cin >> n;
        int v[n];
        int res = 1;
        for(int j = 0; j < n; j++){
            cin >> c;
            v[j] = c;
        }
        sort(v, v+n);
        v[0] = v[0]+1;
        for(int i = 0; i < n; i++){
            res *= v[i];
        }
        cout << res << " ";
    }
    return 0;
}