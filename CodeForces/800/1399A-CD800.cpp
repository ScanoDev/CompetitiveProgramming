#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,a;
        cin >> n;
        int aux = n;
        int k = 0;
        int res = 0;
        int arr[n];
        while(n--){
            cin >> a;
            arr[k] = a;
            k++;
        }
        //1 2 4
        const int tam = sizeof(arr) / sizeof(arr[0]);
        sort(arr, arr + tam);
        for(int i = 0; i < aux-1; i++){
            if(arr[i]-arr[i+1] == 0 || arr[i]-arr[i+1] == -1 || arr[i]-arr[i+1] == 1){
                res++;
            }
        }
        if(res == aux-1 || aux == 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}