#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll suma(vector<ll>& v, ll index){
    ll sum = 0;
    for(ll i = 0; i < index; i++){
        sum += v[i];
    }
    return sum;
}

int main(){
    int t;
    cin >> t;
    vector<ll> escaleras;
    vector<ll> altura;
    while(t--){
        int n, q;
        cin >> n >> q;
        unordered_map<ll, ll> myMap;
        while(n--){
            int a;
            cin >> a;
            escaleras.push_back(a);
        }
        while(q--){
            int k;
            cin >> k;
            altura.push_back(k);
        }
        auto upper = upper_bound(escaleras.begin(), escaleras.end(), 1);
        cout << "upper: " << upper-escaleras.begin() << endl;
        sort(altura.begin(), altura.end());
        ll maxRes = suma(escaleras, escaleras.size());
        for(ll i = 0; i < altura.size(); i++){
            //cout << "----------" << endl;
            //cout << "ITERACION " << i << endl;
            cout << "altura es: " << altura[i] << endl;
            auto upper = upper_bound(escaleras.begin(), escaleras.end(), altura[i]);
            int index = upper-escaleras.begin();
            cout << "index es: " << index << endl;
            if(index == escaleras.size()){
                cout << maxRes << " ";
            }else{
                cout << suma(escaleras, index);
            }
            
            //cout << "int es: " << index << endl;
            /*if(index == escaleras.size()){
                cout << maxRes << " ";
                myMap[altura[i]] += maxRes;
            }
            else if(myMap[altura[i]] > 0){
                cout << myMap[altura[i]] << " ";
            }else{
                ll res = suma(escaleras, index);
                myMap[altura[i]] += res;
                cout << res << " ";
                
            }*/
            //cout << "---------------";
        }
        cout << endl;
        
    }
    


    return 0;
}