#include <iostream>

using namespace std;

int main(){
    int n, k, res;
    cin >> n >> k;
    int num = n;
    if((num-k)%10 == 0 || num%10 == 0) {
        res = 1;
    }else{
        for(int i = 2; i < 11; i++){
            if(((num*i)-k)%10 == 0){
                res = i;
                break;
            }else if((num*i)%10 == 0){
                res = i;
                break;
            }
        }
    }
    

    cout << res;

    return 0;
}