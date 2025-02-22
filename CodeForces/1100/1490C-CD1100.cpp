#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        bool finish = false;
        ll x;
        cin >> x;
        double cubX = cbrt(x);
        ll cubY = cbrt(x);
        if(cubX-cubY == 0){
            cout << "YES"<<endl;
            finish = true;
        }else{
            cout << x%3 << endl;
        }

    }

    return 0;
}