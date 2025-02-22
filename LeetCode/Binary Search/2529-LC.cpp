#include <bits/stdc++.h>

using namespace std;

int binarySearchPos(vector<int>& arr, int low, int high){
    if(high >= low){
        int mid = low + (high-low) / 2;
        
        if(arr[mid] >= 1 && arr[mid-1] <= 0) return mid;

        if(arr[mid] <= 0) return binarySearchPos(arr, mid+1, high); 

        if(arr[mid] >= 1 && arr[mid-1] > 0) return binarySearchPos(arr, low, mid-1);

    }

    return -1;
}

int binarySearchNeg(vector<int>& arr, int low, int high){
    if(high >= low){
        int mid = low + (high-low) / 2;

        if(arr[mid] < 0 && arr[mid+1] >= 0) return mid;

        if(arr[mid] == 0) return binarySearchNeg(arr, low, mid-1); 

        if(arr[mid] < 0) return binarySearchNeg(arr, mid+1, high); 

        if(arr[mid] > 0) return binarySearchNeg(arr, low, mid-1);

    }

    return -1;
}

class Solution {
public:
    int maximumCount(vector<int>& nums) {

        if(nums[0] == 0 && nums[nums.size()-1] == 0) return 0;
        
        if(nums[0] > 0 || nums[nums.size()-1] < 0) return nums.size();

        int resultPos = binarySearchPos(nums, 0, nums.size()-1);
        int resultNeg = binarySearchNeg(nums, 0, nums.size()-1);
        
        int pos = resultPos;
        int neg = resultNeg;

        if(resultPos != -1){
            pos = nums.size()-resultPos;
        }
        if(resultNeg != -1){
            neg = resultNeg+1;
        }
        return max(neg,pos);
        //return pos;
    }
};