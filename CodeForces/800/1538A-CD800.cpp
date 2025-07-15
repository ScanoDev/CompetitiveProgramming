#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int max_val = *max_element(a.begin(), a.end());
        int min_val = *min_element(a.begin(), a.end());
        
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(n, vector<int>(4, 1e9)));
        
        function<int(int, int, int)> solve = [&](int l, int r, int mask) -> int {
            if (mask == 3) return 0;
            
            if (l > r) return (mask == 3) ? 0 : 1e9;
            
            if (dp[l][r][mask] != 1e9) return dp[l][r][mask];
            
            int result = 1e9;
            
            int new_mask = mask;
            if (a[l] == min_val) new_mask |= 1;
            if (a[l] == max_val) new_mask |= 2;
            result = min(result, 1 + solve(l + 1, r, new_mask));
            
            new_mask = mask;
            if (a[r] == min_val) new_mask |= 1;
            if (a[r] == max_val) new_mask |= 2;
            result = min(result, 1 + solve(l, r - 1, new_mask));
            
            return dp[l][r][mask] = result;
        };
        
        cout << solve(0, n - 1, 0) << "\n";
    }
    
    return 0;
}