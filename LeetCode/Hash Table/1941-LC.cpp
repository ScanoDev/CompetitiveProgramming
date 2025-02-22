#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> freq;
        for(char c : s){
            freq[c]++;
        }
        
        int target = freq.begin()->second;
        // freq.begin()->first da es la clave
        // ejemplo: freq['a'] = 5 y es el primero que agregamos
        // el freq.begin()->first devuelva 'a'
        for(auto& pair : freq){
            if(pair.second != target){
                return false;
            }
        }
        return true;
    }
};