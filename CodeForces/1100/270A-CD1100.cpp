#include <iostream>

using namespace std;

int main (){
    //usando la formula de los grados de los triangulos
    // angulo interno = ((n-2)*180) / n
    //despejando...
    //n = 360/(180-angulo interno)
    int t;
    cin >> t;
    while(t--){
        int a,n;
        cin >> a;
        if(360%(180-a) == 0){
            cout << "YES"<<endl;
        } else {
            cout << "NO"<<endl;
        }
    }
    

    return 0;
}