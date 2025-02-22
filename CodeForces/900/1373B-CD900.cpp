#include <iostream>

using namespace std;

int main(){

    int t;
    cin >> t;
    string winner;
    while(t--){
        int k = 0;
        string s;
        cin >> s;
        for(int i = 0; i < s.length()-1; i++){
            string aux;
            if((s[i] == '1' && s[i+1] == '0') || (s[i] == '0' && s[i+1] == '1')){
                k++;
                s.erase(i, 2); 
                i = -1;
                if(s.empty()) {
                    break;
                }
            }
        }
        if(k%2 != 0 ){
            cout << "DA" << endl;
        }else{
            cout << "NET" << endl;
        }
    }

    return 0;
}