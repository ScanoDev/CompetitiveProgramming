#include <iostream>

using namespace std;

int main(){

    int t,n,k,res=1;
    cin >> t;
    while(t--){
        cin >> n >> k;
        if(n == 1){
            cout << k << endl;
            continue;
        }else if(n == k){
            cout << 1 << endl;
            continue;
        }else{
            if(k<n){
                int diff = n%k;
                res += diff/n;
                if(diff%n != 0){
                    res++;
                }
            }
            else {
                res += (k-n)/n;
                if(k%n != 0){
                    res++;
                }
            }
            cout << res<<endl;
            res = 1;
        }
    }
    


    return 0;
}