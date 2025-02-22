#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    string s;
    cin >> s;
    vector<char> res;
    vector<char>v;
    for(char c : s){
        char p = tolower(c);
        res.push_back(p);
    }
 
    for(int i = 0; i < res.size(); i++){
        if(res[i] == 'a' || res[i] == 'o' || res[i] == 'y' || res[i]=='e' || res[i]=='u' || res[i]=='i'){
            continue;
        }else{
            v.push_back('.');
            v.push_back(res[i]);
        }
    }
 
    for(int i = 0; i < v.size(); i++){
        cout << v[i];
    }
 
    return 0;
}