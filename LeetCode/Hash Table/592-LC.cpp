#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findLHS(vector<int>& nums) {
        if (nums.size() <= 1) return 0;
        
        unordered_map<int, int> myHash;
        for (int c : nums) {
            myHash[c]++;
        }

        int res = 0;
        for (const auto& par : myHash) {
            int clave = par.first;
            if (myHash.count(clave + 1)) {
                res = max(res, myHash[clave] + myHash[clave + 1]);
            }
        }

        return res;
    }
};
