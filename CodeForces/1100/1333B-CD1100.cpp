#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        vector<bool> numbers(2,false); // numbers = {false, false}
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        bool res = true;
        for(int i = 0; i < n; i++){
            if(a[i] > b[i] && !numbers[0]){
                res = false;
            }else if(a[i] < b[i] && !numbers[1]){
                res = false;
            }
            if(a[i] == -1) numbers[0] = true;
            if(a[i] == 1) numbers[1] = true;
        }
        if(res == false){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }

    return 0;
}