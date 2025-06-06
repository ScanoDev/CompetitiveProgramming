#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int n;
    cin >> n;
    vector<long long> v;
    while(n--){
        long long a;
        cin >> a;
        v.push_back(a);
    }
    long long res=0;
    for(int i = 0; i < v.size()-1; i++){
        if(v[i]>v[i+1]){
            long long dif = v[i]-v[i+1];
            res += dif;
            v[i+1] += dif;
        }
    }
    cout << res;


    return 0;
}