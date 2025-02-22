#include <iostream>

using namespace std;


int main(){

    long long int n;
    int k = 0;
    cin >> n;

    while(n != 0){
        if(n >= 100){
            n = n-100;
            k++;
        }else if(n >= 20 && n < 100){
            n = n-20;
            k++;
        }else if(n >= 10 && n < 20){
            n = n-10;
            k++;
        }else if(n >= 5 && n < 10){
            n = n-5;
            k++;
        }else if(n < 5 && n > 0){
            n = n-1;
            k++;
        }    
    }
    
    cout << k;

    return 0;
}