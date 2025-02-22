#include <iostream>

using namespace std;

int main(){
    int n;
    string t;
    cin >> n;
    int k = 0;

    for(int i = 0; i < n; i++){
        cin >> t;
        if(t[0] == 'T'){
            k += 4;
        }
        else if(t[0] == 'C'){
            k += 6;
        }
        else if(t[0] == 'O'){
            k += 8;
        }
        else if(t[0] == 'D'){
            k += 12;
        }
        else if(t[0] == 'I'){
            k += 20;
        }
    }

    cout << k;

    return 0;
}