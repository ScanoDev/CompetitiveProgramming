#include <bits/stdc++.h>
using namespace std;


long long int StickLengths(vector<long long int>& nums){
    long long int n = nums.size();
    long long int mid=nums.size()/2, res=0;
    for(long long int i = 0; i < n; i++){
        if(i < mid){
            res += nums[mid]-nums[i];
        }else if(mid < i){
            res += nums[i]-nums[mid];
        }
    }
    return res;
}

int main(){
    long long int t;
    cin >> t;
    vector<long long int> v;
    while(t--){
        long long int val;
        cin >> val;
        v.push_back(val);
    }
    sort(v.begin(), v.end());
    cout << StickLengths(v);

    return 0;
}