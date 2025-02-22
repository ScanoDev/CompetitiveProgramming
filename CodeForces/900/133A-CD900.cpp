#include <iostream>

using namespace std;

int main(){
    string t;
    cin >> t;
    char h = 'H';
    char Q = 'Q';
    char n = '9';
    char p = '+';
    
    size_t enc1, enc2, enc3, enc4;
    enc1 = t.find(h);
    enc2 = t.find(Q);
    enc3 = t.find(n);
    enc4 = t.find(p);

    if(enc1 != string::npos || enc2 != string::npos || enc3 != string::npos){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}