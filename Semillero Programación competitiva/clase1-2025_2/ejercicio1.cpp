#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int m;
        cin >> m;
        vector<long long> v;
        while(m--){
            long long a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        cout << v[v.size()-1] + v[v.size()-2] << endl;
    }

    return 0;
}