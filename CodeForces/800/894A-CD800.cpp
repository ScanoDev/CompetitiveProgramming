#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int n = s.length();

    // n=2 -> dp = [{0,0,0}, {0,0,0}, {0,0,0}]
    vector<vector<int>> dp(n + 1, vector<int>(3, 0));
    for (int i = 1; i <= n; ++i) {
        char current_char = s[i - 1];
        dp[i][0] = dp[i - 1][0];
        dp[i][1] = dp[i - 1][1];
        dp[i][2] = dp[i - 1][2];

        if (current_char == 'Q') {
            dp[i][0]++;
            dp[i][2] += dp[i - 1][1];
            
        } else if (current_char == 'A') {
            dp[i][1] += dp[i - 1][0];
        }
    }

    cout << dp[n][2] << endl;

    return 0;
}