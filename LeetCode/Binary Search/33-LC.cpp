#include <bits/stdc++.h>
using namespace std;

int main(){
    int target = 5;
    vector<int> nums = {1,3,5};
    int low = 0;
    int high = nums.size()-1;
    int res = -1;

    //[4,5,6,7,0,1,2] T=0
    while(high >= low){
        int mid = low + (high-low)/2;
        cout << nums[mid] << endl;

        if(nums[mid] == target){ 
            res = mid;
            cout << mid;
            break;
        }

        if(nums[low] <= target){ 
            high = mid-1;
        }else{
            low = mid+1;
        }
            cout << "next, low: " << low << ", high: " << high << endl;
    }

    return 0;
}