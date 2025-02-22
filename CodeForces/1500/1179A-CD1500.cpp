#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main(){
    long long n, q, a, qi,x ,y, resA, resB;
    cin >> n >> q;
    deque<int> arr;
    deque<int> arr1;
    int op[q];
    for(long long i = 0; i < n; i++){
        cin >> a;
        arr.push_back(a);
    }
    arr1 = arr;
    for(long long i = 0; i < q; i++){
        cin >> op[i];
    }
    sort(op, op+q);
    long long max = op[q-1]; //codigo;
    long long j = 0;
    for(int i = 1; i <= max; i++){
        long long k = op[j];
        x = arr[0];
        y = arr[1];
        if(x > y){
            if(k == i){
                cout << arr[0] << " " << arr[1] << endl;
                j++;
            }
            long long lastA = arr.front();
            arr.pop_front();
            long long lastB = arr.front();
            arr.pop_front();
            arr.push_back(lastB);
            arr.push_front(lastA);
        }else{
            if(k == i){
                cout << arr[0] << " " << arr[1] << endl;
                j++;
            }
            long long last = arr.front();
            arr.pop_front();
            arr.push_back(last);
        }
            
    }

    return 0;
}