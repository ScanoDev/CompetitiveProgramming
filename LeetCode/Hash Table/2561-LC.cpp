//With help of Techdose :3
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        int n = basket1.size();
        int min_val = INT_MAX;
        map<int, int> balance;

        for(int i = 0; i < n; i++){
            balance[basket1[i]]++;
            balance[basket2[i]]--;
            min_val = min({min_val, basket1[i], basket2[i]});
        }
        vector<int> transfer;
        for(auto& [val, bal] : balance) {
            if(bal & 1) return -1;
            for(int i = 0; i < abs(bal)/2; ++i){
                transfer.push_back(val);
            }
        }
        sort(transfer.begin(), transfer.end());
        long long cost = 0;
        for(int i = 0; i < transfer.size()/2; i++){
            cost += min(transfer[i], 2*min_val);
        }
        return cost;
    }
};