#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    vector<long long> v(t);
    long long sum = 0;
    for (int i = 0; i < t; i++){
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());
    long long maxVal = v.back();
    long long time = max(sum, 2LL * maxVal);
    
    cout << time;
    return 0;
}
