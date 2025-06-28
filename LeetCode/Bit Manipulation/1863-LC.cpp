#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int mask = 0; mask < (1 << n); mask++){ // 100 == 4
            int window_sum = 0;
            for(int i = 0; i < n; i++){ // i < 2
                if(mask & (1 << i)){// 
                    window_sum = window_sum ^ nums[i];
                }
            }
            sum += window_sum;
        }
        return sum;
    }
};