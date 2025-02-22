#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool isVowel(char c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    int countVowelSubstrings(string word) {
        int n = word.size();
        int count=0;
        
        for(int start = 0; start < n; start++){
            unordered_map<int,int> freq;
            for(int end = start; end < n; end++){
                char c = word[end];
                if(isVowel(c)){
                    freq[c]++;
                    if(freq.size() == 5){
                        count++;
                    }
                } else{
                    break;
                }
            }
        }
        return count;

    }
};