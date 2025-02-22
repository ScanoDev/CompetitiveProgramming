// Took from: jackiehluo
#include <iostream>

using namespace std;

int main(){

    int n,m,t;
    cin >> n >> m;
    int v[100005], dp[100005] = {0};
    bool ver[1000005];
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }
    for(int i = n; i >= 1; i--){
        if(!ver[v[i]]){
            dp[i]++;
        }
        ver[v[i]] = true;
    }
    for(int i = n; i >= 1; i--){
        dp[i] += dp[i+1];
    }
    for(int i = 0; i < m; i++){
        cin >> t;
        cout << dp[t] << endl;
    }

    return 0;   
}