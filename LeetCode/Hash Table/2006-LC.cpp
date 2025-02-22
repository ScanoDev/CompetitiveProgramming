#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int number = 0;

        for(int num : nums){
            if(freq.find(num + k) != freq.end()){
                number += freq[num+k];
            }
            if(freq.find(num - k) != freq.end()){
                number += freq[num - k];
            }
            freq[num]++;
        }
        return number;
    }
};