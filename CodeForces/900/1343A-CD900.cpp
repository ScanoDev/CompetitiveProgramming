#include <iostream>
#include <cmath>

using namespace std;
using lli = long long int;

int main(){
    lli t;
    cin >> t;
    while(t--){
        lli a, res;
        int pos = 0;
        cin >> a;
        for(int i = 0; i < a; i++){
            pos += pow(2, i);
            if(a%pos == 0 && pos > 1){
                res = a/pos;
                cout << res << endl;
                break;
            }
        }
    }
    return 0;
}