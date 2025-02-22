#include <bits/stdc++.h>
using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

//THIS IS NOT PART OF THE LEETCODE CODE//
bool isBadVersion(int num){            //
    int target = 2;                    //
    if(num == target) return true;     //
    return false;                      //
}                                      //
/////////////////////////////////////////

class Solution {
    public:
        int firstBadVersion(int n) {
            int high = n;
            int low = 0;
            while(high >= low){
                int mid = low + (high-low)/2;
    
                if(isBadVersion(mid) == false 
                && isBadVersion(mid+1) == true){
                    return mid+1;
                }
    
                if(isBadVersion(mid) == true 
                && isBadVersion(mid-1) == false){
                    return mid;
                }
    
                if(isBadVersion(mid) == true){
                    high = mid-1;
                }else{
                    low = mid+1;
                }
    
            }
            return -1;
        }
    };