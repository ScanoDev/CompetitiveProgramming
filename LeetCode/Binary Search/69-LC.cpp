#include <bits/stdc++.h>

using namespace std;

typedef long long lli;

int bs(lli low, lli high, lli target, bool finish){
    while(high >= low){
        lli mid = low + (high-low)/2;
        if((mid*mid == target) || (((mid+1)*(mid+1) > target) && ((mid*mid) < target))) return mid;

        if(mid*mid < target) return bs(mid+1, high, target, false);
        if(mid*mid > target) return bs(low, mid-1, target, false);
    }
    return -1;
}

class Solution {
public:
    int mySqrt(int x) {
        lli res = bs(0, x/2, x, false);
        if(x == 0 || x == 1) return x;
        return res;
    }
};