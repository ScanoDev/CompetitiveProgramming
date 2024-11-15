#include <iostream>

using namespace std;

int main(){
    int n,x, k=0;
    cin >> n >> x;
    for(int i = 1; i <= n; i++){
        if(x%i == 0 && x/i <= n){
            k++;
        }
    }
    cout << k;

    return 0;
}