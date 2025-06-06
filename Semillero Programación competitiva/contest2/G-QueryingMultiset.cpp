#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin >> t;
    multiset<ll> v;
    vector<ll> record;
    ll sum=0;
    while(t--){
        ll q;
        cin >> q;
        if(q!=3){
            ll x;
            cin >>x; 
            if(q == 1){
                v.insert(x-sum);
            }
            if(q == 2){
                sum += x;
            }
        }else{
            ll min_val = *v.begin();
            record.push_back(min_val+sum);
            v.erase(v.begin());
        }
        ///
    }
    for(ll c : record){
        cout << c << endl;
    }

    return 0;
}