#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, n, m, aux;
        cin >> x >> n >> m;
        aux = x;
        while(n--){
            if(aux/2 < 10){
                break;
            }
            else{
                aux = aux/2+10;
            }
        }
        while(m--){
            aux -= 10;
        }
        if(aux <= 0){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    }

    return 0;
}