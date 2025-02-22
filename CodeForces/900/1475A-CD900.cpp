#include <bits/stdc++.h>

using namespace std;
using lli = long long int;

int main(){
    lli t;
    cin >> t;
    lli n;
    while(t--){
        cin >> n;
        if(n%2 != 0 || n%3 == 0 || n%5 == 0 || n%7 == 0 || n%9 == 0){
            cout << "YES" << endl;
        }else {
            auto res = n/2;
            for(lli i = 0; i < n/2; i++){
                if(res - static_cast<lli>(res) == 0){
                    if(res > 2 && res%2 != 0){
                        cout << "YES" << endl;
                        break;
                    }else if(res > 2 && res%2 == 0){
                        res = res/2;
                    }else{
                        cout << "NO" << endl;
                        break;
                    }
                }else{
                    cout << "NO" << endl;
                    break;
                }
            }
            
            
        }
    }

}