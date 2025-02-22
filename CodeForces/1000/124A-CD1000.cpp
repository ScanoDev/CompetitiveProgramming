#include <iostream>

using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    if(a+b >= n || b == 0){
        cout << n-a;
    } else{
        cout << b+1;
    }


    return 0;
}