#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> w1;
        unordered_map<string, int> w2;
        
        for(string s : words1){
            w1[s]++;
        }
        for(string s : words2){
            w2[s]++;
        }

        int res = 0;
        //words1.insert(words1.end(), words2.begin(), words2.end());
        
        for(string s : words1){
            if(w1[s] == 1 && w2[s] == 1){
                res++;
            }
        }
        return res;
    }
};