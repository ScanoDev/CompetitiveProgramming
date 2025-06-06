#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    ll res = 0, sum = 0;
    map<ll, ll> prefix;
    prefix[0] = 1;
    
    for (ll i = 0; i < n; i++) {
        sum += v[i];
        if (prefix.count(sum - x)) {
            res += prefix[sum - x];
        }
        prefix[sum]++;
    }
    
    cout << res << endl;
    return 0;
}