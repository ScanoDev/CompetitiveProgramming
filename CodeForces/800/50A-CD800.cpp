#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m;
    cin >> n >> m;
    if(n%2 == 0 && m%2 == 0){
        cout << n*(m/2);
    }else{
        cout << n*m-2;
    }

    return 0;
}