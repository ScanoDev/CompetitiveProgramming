#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(3*n%4 == 0){
            cout << "Bob";
        }else{
            cout << "Alice";
        }
        cout << endl;
    }

    return 0;
}

//