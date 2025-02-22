#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int xor1 = 0, xor2 = 0;

        for(int a : nums1) xor1 ^= a;

        for(int b : nums2) xor2  ^= b;

        int result = 0;
        if (nums2.size() % 2 != 0) result ^= xor1;
        if (nums1.size() % 2 != 0) result ^= xor2;

        return result;
    }
};