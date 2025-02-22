#include <iostream>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int cont = 0, index = 0;
        for(int i = 0; i < s.size(); i++){
            for(int j = index; j <= t.size(); j++){
                if(s[i] == t[j]){
                    cont++;
                    index = j+1;
                    break;
                }
            }
        }
        if(cont == s.size()){
            return true;
        }
        return false;
    }
};