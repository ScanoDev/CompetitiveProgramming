#include <bits/stdc++.h>
using namespace std;
int bs(vector<int>& arr, int low, int high, int x, int val){
    if(high >= low){
        int mid = low + (high-low)/2;
        val = arr[mid];

        if(arr[mid] == x){
            return mid;
        }
        if(arr[mid] > x) return bs(arr, low, mid-1, x, val-1);

        return bs(arr, mid+1, high, x, val+1);
    }else{
        return high+1;
    }
    //if(val < x) return val+1;
}

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int result = bs(nums, 0, nums.size()-1, target, 0);
        return result;
    }
};