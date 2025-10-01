#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int res = s.size();
        for(int i = 1; i < s.size(); i++){
            if(s[i] == s[i-1]){
                res = 1;
            }
        }
        cout << res << endl;
    }

    return 0;
}