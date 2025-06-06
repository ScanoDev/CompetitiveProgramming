#include <bits/stdc++.h>

using namespace std;

int main(){
    long long t;
    cin >> t;
    vector<long long> v;
    while(t--){
        long long n;
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    long long target = v[v.size()/2], res=0;
    for(long long i=0; i < v.size(); i++){
        if(v[i] > target){
            res += v[i] - target;
        }else{
            res += target - v[i];
        }
    }
    cout << res;




    return 0;
}

// 2 3 1 5 2 --> 1 2 2 3 5
// v[v/2] = 2
// (1+1) (2) (2) (3-1) (5-3) = 1+1+3 
// r = 5