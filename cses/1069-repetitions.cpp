#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int maxCount = 1, preCount=1;
    for(int i = 0; i < s.size()-1; i++){
        if(s[i] == s[i+1]){
            preCount++;
        }else{
            if(preCount > maxCount){
                maxCount = preCount;
            }
            preCount = 1;
            
        }
    }
    if(preCount > maxCount){
        maxCount = preCount;
    }
    cout << maxCount;

    return 0;
}