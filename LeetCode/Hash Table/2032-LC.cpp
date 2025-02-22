#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int,int> freq;
        vector<int> v;
        set<int>s1(nums1.begin(), nums1.end());
        set<int>s2(nums2.begin(), nums2.end());
        set<int>s3(nums3.begin(), nums3.end());

        for(int i : s1){
            freq[i]++;
        }
        for(int i : s2){
            freq[i]++;
        }
        for(int i : s3){
            freq[i]++;
        }
        for(const auto& i : freq){
            if(i.second > 1){
                v.push_back(i.first);
            }
        }

        return v;  
    }
};