#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, k, res = 0;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    const int tam = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + tam);
    bool val = false;
    bool val2 = false;
    if(arr[0] > 0) val = true;
    if(arr[0] == 0) val2 = true;
    for(int i = 0; i < n; i++){
        if(arr[i] < 0 && i < k) {
            res += arr[i] * -1;
        } else if(i <= k && val == true || val2 == true){
            res = 0;
        }
    }

    cout << res;


    return 0;
}