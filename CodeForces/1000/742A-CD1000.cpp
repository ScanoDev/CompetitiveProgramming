#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long int r,n;
    cin >> n;
    int res[] = {1,2,3,4};
    int res2[] = {8,4,2,6};
    for(int i = 0; i < 4; i++){
        if(n == 0){
            cout << 1;
            break;
        }
        else if(n%4 == res[i]){
            cout << res2[i];
            break;
        } 
        else if(n%4 == 0){
            cout << 6;
            break;
        }
    }

    return 0;
}