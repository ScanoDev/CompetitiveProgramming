#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int resPar,resImpar,par=0,impar=0;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        if(n%2 == 0){
            resPar = i+1;
            par++;
        }else{
            resImpar = i+1;
            impar++;
        }
    }
    if(impar == 1){
        cout << resImpar;
    }else{
        cout << resPar;
    }

    return 0;
}