#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0], max=0;
        for(int i = 1; i < prices.size(); i++){
            if(prices[i]<min){
                min = prices[i];
            }
            int ganancia = prices[i]-min;
            if(ganancia > max){
                max = ganancia;
            }
        }
        return max;
    }
};