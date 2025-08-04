#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int tam = s.length(), k=0;
        reverse(s.begin(), s.end());
        if(tam == 1){
            return 1;
        } else{
            for(char c : s){
                if(c == ' ' && k >= 1){
                    break;
                }else if(c == ' ' && k == 0){
                    continue;
                }else{
                    k++;
                }
            }
            return k;
        }
        
    }
};