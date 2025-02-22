#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<float>aux;
        int res,left=0;
        int right = nums.size()-1;
        while(!nums.empty()){
            float number = (nums[left] + nums[right])/2.0;
            aux.insert(number);
            nums.erase(nums.begin());
            nums.erase(nums.end()-1);
            right = nums.size()-1;
        }
        return aux.size();

    }
};