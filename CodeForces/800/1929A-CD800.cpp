#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    int t, n, a;
    cin >> t;
    while(t--){
        int res = 0, k = 0;
        cin >> n;
        set<int> val1;
        int arr[n];
        while(n--){
            cin >> a;
            arr[k] = a;
            k++;
            val1.insert(a);
        }
        if(val1.size() == 1){
            cout << 0 << endl;
        }else {
            int tam = sizeof(arr) / sizeof(arr[0]);
            sort(arr, arr + tam);
            for(int i = 1; i < tam; i++){
                res += arr[tam-i] - arr[tam-i-1];
            }
            cout << res << endl;
        }
        
        
    }

    return 0;
}