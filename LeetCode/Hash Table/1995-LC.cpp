#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        unordered_map<int, int> freq;
        int n = nums.size();
        int res = 0;
        for(int k = n-2; k >= 1; k--){
            freq[nums[k+1]]++;

            for(int i = 0; i < k; i++){
                for(int j = i+1; j < k; j++){
                    int sum = nums[i] + nums[j] + nums[k];
                    if(freq.find(sum) != freq.end()){
                        res += freq[sum];
                    }
                }
            }

        }
        return res;

    }
};