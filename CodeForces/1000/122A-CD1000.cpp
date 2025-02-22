#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s = to_string(n);
    bool verify = false;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '7' || s[i] == '4'){
            verify = true;
        }else{
            verify = false;
            break;
        }
    }
    if(verify == true){
        cout << "YES";
    } else{
        bool verify2 = false;
        int arr[13] = {4,7,44,47,74,77,444,447,474,477,744,747,777};
        for(int i = 0; i < 12; i++){
            if(n%arr[i] == 0){
                cout << "YES";
                verify2 = true;
                break;
            }
        }
        if(verify2 == false){
            cout << "NO";
        }

    }

    return 0;
}