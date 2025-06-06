#include <bits/stdc++.h>
using namespace std;

int numberOfMovements(vector<int>& nums){
    int tam = nums.size();
    int res = 0;
    for(int i = 0; i < tam; i++){
        if(nums[i] == 1){
            res++;
            if(i+1 < nums.size()){
                nums[i+1]--;
            }
        }else if(nums[i] == 0){
            continue;
        }else{
            res++;
        }
    }
    return res;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v = {};
        while(n--){
            int h;
            cin >> h;
            v.push_back(h);
        }
        sort(v.begin(), v.end());
        cout << numberOfMovements(v) << endl;
    }


    return 0;
}