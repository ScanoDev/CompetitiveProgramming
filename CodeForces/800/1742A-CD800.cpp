#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a, b, c;
    while(n--){
        cin >> a >> b >> c;
        int nums[] = {a, b, c};
        const int size = sizeof(nums) / sizeof(nums[0]);
        sort(nums, nums + size);
        if(nums[2] == nums[0] + nums[1]) {
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }

    }

    return 0;
}