#include <bits/stdc++.h>

using namespace std;

int main(){
    unordered_map<string,int> freq;
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        freq[s]++;
        if(freq[s] > 1){
            cout << s << freq[s]-1 << endl;
        }else{
            cout << "OK" << endl;
        }
    }

    return 0;
}