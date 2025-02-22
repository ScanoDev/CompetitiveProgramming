#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t,c;
    cin >> t;
    int resp[t];
    int v[t];
    
    for(int i = 0; i < t; i++){
        cin >> c;
        v[i] = c;
    }

    int n = sizeof(v) / sizeof(v[0]);
    sort(v, v+n);

    for(int i = 0; i < t; i++){
        cout << v[i] <<" ";
    }

    return 0;
}