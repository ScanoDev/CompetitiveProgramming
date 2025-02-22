#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, cnt4 = 0;
    bool verify = true;
    cin >> n;
    string res = "hola";
    string s = to_string(n);
    for(int i = 0; i < s.length(); i++){
        if(s[0] == '4'){
            res = "NO";
        }
        else if(s[i] =='1'){
            verify = true;
        }else if(s[i] == '4'){
            if(i <= s.length()-2 && s[i+1] == '4' && s[i+2] == '4'){
                res = "NO";
            }
        }else if(s[i] != '1' && s[i] != '4'){
            res = "NO";
        }
    }

    if(res == "hola"){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}