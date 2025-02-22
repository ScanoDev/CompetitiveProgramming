#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(string s) {
        vector<int> dp;
        int cont1=0, cont0=0, res=0;
        for(int i : s){
            if(i == '1'){
                cont1++;
            }else{
                cont0++;
            }
        }
        if(s[0] == '0'){
            res++;
        }else{
            res--;
        }
        res += cont1;
        dp.push_back(res);
        for(int i = 1; i < s.size()-1; i++){
            if(s[i] == '1'){
                dp.push_back(res-1);
                res--;
            }else{
                dp.push_back(res+1);
                res++;
            }
        }

        sort(dp.begin(), dp.end());
        return dp[dp.size()-1];
    }
};