#include <bits/stdc++.h>

using namespace std;

int maximumLengthClean(vector<int>& nums){
    int n = nums.size();
    if(n < 2) return n;
    
    int eventCount = 0, oddCount = 0;
    for(int num : nums){
        if(num%2 == 0) eventCount++;
        else oddCount++;
    }
    int result = max(eventCount, oddCount);

    //dp[0] longitud maxima terminando con un numero par, o sea -> impar + par
    //dp[1] longitud maxima terminando con un numero impar, o sea -> par + impar
    vector<int> dp(2, 0);
    for(int num : nums){
        int parity = num%2;
        dp[parity] = max(dp[parity], dp[1-parity]+1);
    }
    result = max(result, max(dp[0], dp[1]));

    return result;

}