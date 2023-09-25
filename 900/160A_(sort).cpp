#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int t;
    cin >> t;
    int c;
    int v[t];
    for(int i = 0; i < t; i++){
        cin >> c;
        v[i] = c;
    }
    int n = sizeof(v) / sizeof(v[0]);
    sort(v, v+n, greater<int>());
    int sum = 0;
    for(int i = 0; i < t; i++) sum += v[i];
    int res = sum/2;
    int k = 0;
    int val = 0;
    for(int i = 0; i< t; i++){
        val += v[i];
        if(val > res){
            k++;
            break;
        }else{
            k++;
        }
    }
    cout << k;

    return 0;
}