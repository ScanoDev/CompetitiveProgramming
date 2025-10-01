#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string a,b;
        cin >> a >> b;
        char ac = a[0];
        a[0] = b[0];
        b[0] = ac;
        cout << a << " " << b << endl;
    }

    return 0;
}