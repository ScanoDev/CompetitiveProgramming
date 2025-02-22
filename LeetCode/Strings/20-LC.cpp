#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        int par=0,llaves=0,corchetes=0;
        deque<char> d;

        for(char c : s){
            if(c == '(' || c == '[' || c == '{'){
                d.push_back(c);
            }else{
                if(d.empty()){
                    return false;
                }
                char curr = d.back();
                if((c == ')' && curr != '(')||(
                c == '}' && curr != '{' )||
                (c == ']' && curr != '[')){
                    return false;
                }
                d.pop_back();
            }
        }
        return d.empty();
        
        
    }
};