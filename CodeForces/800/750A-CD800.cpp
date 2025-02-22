#include <iostream>

using namespace std;

int main(){
    int n, k, auxt, arr;
    int t = 0;
    cin >> n >> k;
    arr = 240 - k; // 18
    if(n == 0 || k == 0){
        cout << n;
    }else{
        for(int i = 1; i <= n; i++){
            t += i*5; // max 105
            if(t > arr){
                cout << i-1;
                break;
            }else if(t < arr && i == n){
                cout << n;
                break;
            }else if(t == arr){
                cout << i;
                break;
            }
        }
    }

    return 0;
}