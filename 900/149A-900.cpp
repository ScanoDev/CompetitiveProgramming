#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int k, m, l=12, ki=0, p=0;
    bool pass = false;
    cin >>k;
    vector<int> v;
    
    while(l--){
        cin >> m;
        v.push_back(m);
    }
    sort(v.begin(), v.end(), greater<int>());
    if(k == 0){
        cout << 0;
        pass = true;
    }else{
        for(int i = 0; i <= k; i++){
            ki += v[p];
            p++;
            if(p >= 13 || v[0] == 0){
                cout << -1;
                break;
            }
            if(ki >= k){
                cout << p;
                pass = true;
                break;
            }
        }
    }

    return 0;
}