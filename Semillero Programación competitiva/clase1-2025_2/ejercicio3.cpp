#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    int number = t;
    vector<string> v;
    int i = 0;
    while(t--){
        string s;
        cin >> s;
        v.push_back(s);
    }
    while(number--){
        for(int i = 0; i < v.size(); i++){
            cout << "en proceso...";
        }
    }

    return 0;
}