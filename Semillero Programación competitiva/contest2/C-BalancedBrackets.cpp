#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        deque<char> d;
        bool balanced = true;
        
        for(char c : s){
            if(c == '(' || c == '[' || c == '{'){
                d.push_back(c);
            } else {
                if(d.empty()){
                    balanced = false;
                    break;
                }
                char curr = d.back();
                if((c == ')' && curr != '(') ||
                   (c == '}' && curr != '{') ||
                   (c == ']' && curr != '[')){
                    balanced = false;
                    break;
                }
                d.pop_back();
            }
        }
        
        if(!d.empty()){
            balanced = false;
        }
        
        cout << (balanced ? "YES" : "NO") << endl;
    }
    return 0;
}
