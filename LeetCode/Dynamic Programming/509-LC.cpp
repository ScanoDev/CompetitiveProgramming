#include <iostream>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if(n == 0) return 0;
        int dp[n];
        if(n > 0) dp[0] = 1;
        if(n > 1) dp[1] = 1;
        for(int i = 2; i < n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        int res = dp[n-1];
        return res;
    }
};