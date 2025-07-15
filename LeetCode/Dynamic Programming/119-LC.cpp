#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> dp;
        dp.push_back({1});
        for(int i = 1; i <= rowIndex; i++){
            vector<int> index;
            for(int j = 0; j <= i; j++){
                if(j == 0 || j == i){
                    index.push_back(1);
                }else{
                    int number = dp[i-1][j]+dp[i-1][j-1];
                    index.push_back(number);
                }
            }
            dp.push_back({index});
        }
        return dp[rowIndex];
    }
};