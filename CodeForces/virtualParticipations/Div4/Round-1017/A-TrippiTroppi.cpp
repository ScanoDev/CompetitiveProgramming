#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    cin.ignore(); //ignorar salto de linea
    while(t--){
        string s;
        getline(cin, s); //aunque ignoremos el salto de linea, lee bien porque sí lee el espacio pero no el enter.
        int k = 0;
        string word = "";
        for(char c : s){
            if(k==0){
                word += c;
                k++;
            }else{
                if(isspace(c)){
                    k = 0;
                }
            }
        }
        cout << word << endl;
    }

    return 0;
}