#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string inc = "++", dec = "--";
    int x = 0;
    for(int i = 0; i < n; i++){
        string op;
        cin >> op;
        if(op.substr(0,2) == inc || op.substr(1,2) == inc){
            x++;
        }
        else{
            x--;
        }
    }
    cout << x << endl;
    return 0;
}
