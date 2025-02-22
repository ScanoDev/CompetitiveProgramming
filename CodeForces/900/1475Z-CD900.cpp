#include <iostream>
using namespace std;

int main() {
    int t;
    long long int c;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> c;
        int comp = c/2;
        if(comp%2 == 0){
            cout << "NO";
        }else{
            cout << "YES";
        }
    }
    
    return 0;
}
