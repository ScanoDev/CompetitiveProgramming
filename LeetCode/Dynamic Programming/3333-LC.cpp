#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long md = 1e9 + 7;
    int possibleStringCount(string word, int k) {
        int n = word.size();
        int cnt = 1, total = 1;
        vector<int> seg;
        for(int i = 1; i < n; i++){
            if(word[i] == word[i-1]){
                cnt++;
            }else{
                total = ((long long)total * cnt)%md;
                seg.push_back(cnt-1);
                cnt = 1;
            }
        }
        total = ((long long)total * cnt)%md;
        seg.push_back(cnt-1);
        int minLen = seg.size();
        if(k<=minLen) return total;
        k -= minLen;
        vector<long long> dp(k);
        dp[0] = 1;
        for(int x : seg){
            vector<long long> pref(k);
            pref[0] = dp[0];
            for(int i = 1; i < k; i++){
                pref[i] = (pref[i-1] + dp[i])%md;
            }
            for(int i = 0; i < k; i++){
                if(i-x-1 >= 0) dp[i] = (pref[i] - pref[i-x-1])%md;
                else dp[i] = pref[i];
            }
        }
        int invalid = 0;
        for(int x : dp) invalid = (invalid + x)%md;
        return (total - invalid + md)%md;
    }
};