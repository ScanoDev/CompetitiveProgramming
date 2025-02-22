#include <bits/stdc++.h>

using namespace std;

int main(){
    unordered_map<char, int> myHash;
    string s = "LVIII";
    myHash['I'] = 1;
    myHash['V'] = 5;
    myHash['X'] = 10;
    myHash['L'] = 50;
    myHash['C'] = 100;
    myHash['D'] = 500;
    myHash['M'] = 1000;

    int number=0, it=0;
    for(int i = 0; i < s.size(); i++){
        if(i == 0){
            number += myHash[s[i]];
            cout << number << endl;
        }
        else if(myHash[s[i]] <= myHash[s[i-1]]){
            number += myHash[s[i]];
        }else if(myHash[s[i]] > myHash[s[i-1]]) {
            if(s[i] == 'V' || s[i] == 'X'){
                cout << "entre";
                number--;
                number += (myHash[s[i]]-1);
            } else if(s[i] == 'L' || s[i] == 'C'){
                number -= 10;
                number += (myHash[s[i]]-10);
            } else if(s[i] == 'D' || s[i] == 'M'){
                number -= 100;
                number += (myHash[s[i]]-100);
            }
        }
    }

    cout << "final number: " << number;

    return 0;
}