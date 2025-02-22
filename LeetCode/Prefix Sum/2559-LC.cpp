#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        unordered_set<char> vowels = {'a','e','i','o','u'};
        int n = words.size();
        vector<int> prefix(n+1, 0);
        
        for(int i = 0; i < n; i++){
            string& word = words[i];
            if(vowels.count(word[0]) && vowels.count(word.back())){
                prefix[i+1] = prefix[i]+1;
            }else{
                prefix[i+1] = prefix[i];
            }
        }
        vector<int> ans;
        for(auto& q : queries){
            int l = q[0], r = q[1];
            ans.push_back(prefix[r+1] - prefix[l]);
        }
        return ans;

    }
};
