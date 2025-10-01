#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        string s, t;
        cin >> s >> t;
        int ptr = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '?'){
                if(ptr < t.size()) s[i] = t[ptr];
                else s[i] = 'a'; // Default character if t is exhausted
            }
            if(s[i] == t[ptr] && ptr < t.size()){
                ptr++;
            }
        }
        if(ptr < t.size()){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
            cout << s << endl;
        }
    }
    return 0;
}