#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return -1;
        for(int i = 0; i < haystack.size(); i++){
            bool finish = true;
            for(int j = 0; j < needle.size(); j++){
                if(haystack[i+j] != needle[j]){
                    finish = false;
                    break;
                }
            }
            if(finish) return i;
        }
        return -1;
    }
};

int main(){

    Solution sol;
    string haystack = "sadbutsad";
    string needle = "sad";
    int result = sol.strStr(haystack, needle);
    cout << result;
    return 0;
}