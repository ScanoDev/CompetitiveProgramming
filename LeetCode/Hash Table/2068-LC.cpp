#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char, int> w1;
        unordered_map<char, int> w2;

        string word = word1+word2;

        for(char c : word1){
            w1[c]++;
        }
        for(char c : word2){
            w2[c]++;
        }

        for(char c : word){
            if(abs(w1[c]-w2[c]) > 3){
                return false;
            }
        }
        return true;

    }
};