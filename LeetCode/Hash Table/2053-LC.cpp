#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> freq;
        for(string s : arr){
            freq[s]++;
        }   
        int index = 1;
        for(int i = 0; i < arr.size(); i++){
            if(freq[arr[i]] < 2 && index == k){
                return arr[i];
            } else if(freq[arr[i]] < 2 && index < k){
                index++;
            }
        }
        return "";
    }
};