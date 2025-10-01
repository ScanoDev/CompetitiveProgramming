#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string sp;
        for(int i = s.size()-1; i >=0; i--){
            if(s[i] == 'p'){
                sp += 'q';
            }else if(s[i] == 'q'){
                sp += 'p';
            }else{
                sp += 'w';
            }
        }
        cout << sp << endl;
    }

    return 0;
}