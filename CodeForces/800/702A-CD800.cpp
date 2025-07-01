#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int max_length = 1;
    int current_length = 1;
    for(int i = 1; i < n; i++){
        if(v[i] > v[i-1]){
            current_length++;
        }else{
            current_length = 1;
        }
        max_length = max(max_length, current_length);
    }
    cout << max_length;

    return 0;
}
//1 7 2 11 15
//maximum length of an increasing subarray
// 1 7
// 7
// 2 11 15
