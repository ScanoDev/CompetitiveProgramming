#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> original = nums;
        vector<int> res;
        sort(nums.begin(), nums.end());
        unordered_map<int, int> myHash;
        int n = nums.size()-1;
        int kprima = k, counter = 1;
        while(kprima--){
            myHash[nums[n]]++;;
            n--;
        }
        for(int c : original){
            if(myHash[c] > 0 && counter <= k){
                res.push_back(c);
                counter++;
                myHash[c]--;
            }
        }
        return res;
        
    }
};