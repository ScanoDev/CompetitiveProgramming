#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if(a> b){
            cout << b <<" " << a;
        }else{
            cout << a << " " << b;
        }
        cout << endl;
    }

    return 0;
}