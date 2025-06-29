#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string number = to_string(x);
        string prove = "";
        for(int i = number.size()-1; i >= 0; i--){
            prove += number[i];
        }
        if(prove == number){
            return true;
        }else{
            return false;
        }
    }
};