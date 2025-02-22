#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string a, aux;
        cin >> a;
        for(char c : a){
           aux += tolower(c); 
        }
        if(aux == "yes"){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    }

    return 0;
}