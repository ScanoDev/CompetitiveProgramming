#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int temp = numBottles;
        int res = numBottles;
        while(temp >= numExchange){ // temp = 6
            temp -= numExchange; //temp = 3
            res++; // 11
            temp++;
        }
        return res;
    }
};