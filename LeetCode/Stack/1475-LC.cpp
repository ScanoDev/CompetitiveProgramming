#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> myStack;
        vector<int>ans;
        for(int i = 0; i < prices.size(); i++){
            myStack.push(prices[i]);
            bool cont = false;
            for(int j = i+1; j < prices.size(); j++){
                if(myStack.top() >= prices[j]){
                    ans.push_back(myStack.top()-prices[j]);
                    cont = true;
                    j = prices.size();
                }
            }
            if(cont == false){
                ans.push_back(prices[i]);
            }
            
        }
        return ans;
    }
};