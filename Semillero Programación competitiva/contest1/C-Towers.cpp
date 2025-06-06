#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t, res=0;
    cin >> t;
    vector<int> v;
    vector<int> towers;
    while(t--){
        int n;
        cin >> n;
        v.push_back(n);
    }
    for(int i =0; i < v.size(); i++){
        int value = v[i];
        auto it = upper_bound(towers.begin(), towers.end(), value);
        if( it == towers.end()){
            towers.push_back(value);
        }else{
            *it = value;
        }
    }
    
    cout << towers.size();

    return 0;
}

//towers = 3, 8
// 2, 8
