#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int bs(vector<int>& arr, int low, int high, int x){
    
            if(high >= low){
                int mid = low + (high-low)/2;
    
                if(arr[mid] == x){
                    return mid;
                }
    
                if(arr[mid] > x){
                    return bs(arr, low, high-1, x);
                }
                return bs(arr, low+1, high, x);
            }
            return -1;
        }
    
        int search(vector<int>& nums, int target) {
            int low=0;
            int high = nums.size()-1;
            int res = bs(nums, low, high, target);
            return res;
        }
    };