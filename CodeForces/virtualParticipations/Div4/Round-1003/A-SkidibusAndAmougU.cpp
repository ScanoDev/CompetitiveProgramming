#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s.size() < 2){
            cout << "i";
        }else{
            s.erase(s.size() - 2);
            cout << s+'i' << endl;
        }
    }
    return 0;
}