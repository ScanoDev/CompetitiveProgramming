#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, c;
    cin >> n >> m;
    int v[m];
    for(int i = 0; i < m; i++){
        cin >> c;
        v[i] = c;
    }

    sort(v, v+m);
    int res = v[n-1] - v[0];
    int ans = 0;
    for(int i = n; i <= m; i++){
        ans = v[i-1]-v[i-n];
        ans = abs(ans);
        res = min(res, ans);
        
    }
    cout << res;

    return 0;
}