#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.empty()) return 0;

        sort(nums.begin(), nums.end());
        int index=0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == val){
                for(int j = i+1; j < nums.size(); j++){
                    if(nums[j] != val){
                        int valI=nums[i], valJ=nums[j];
                        nums[i] = valJ;
                        nums[j] = valI;   
                    }
                }
            }
        }
        for(int i : nums){
            if(i != val){
                index++;
            }
        }
        return index;

    }
};