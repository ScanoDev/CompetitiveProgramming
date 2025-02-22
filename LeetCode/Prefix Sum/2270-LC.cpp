#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long n,k,res=0,sol=0;
        vector<long long> prefix;
        vector<long long> nsum;
        for(long long i = 1; i < nums.size(); i++){
            sol += nums[i];
        }
        nsum.push_back(nums[0]);
        prefix.push_back(sol);
        for(long long i = 0; i < nums.size()-1; i++){
            if(nsum[i] >= prefix[i]){
                res++;
            }
            nsum.push_back(nsum[i] + nums[i+1]);
            prefix.push_back(prefix[i]-nums[i+1]);
            
            
        }


        return res;
    }
};