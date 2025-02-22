#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    char n0 = '.';
    char n1 = '-'; // -.
    char n2 = '-'; // --
    string num;
    for(int i = 0; i < s.length();i++){
        if(s[i] == n0){
            cout << 0;
        } else if(s[i] == n1) {
            if(s[i+1] == n2){
                cout << 2;
                i++;
            }else{
                cout << 1;
                i++;
            }
        }
    }


    return 0;
}