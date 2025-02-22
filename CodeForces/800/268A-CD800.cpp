#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    cin >> n;

    int number(0); //valor inicial de cero
    vector <int> h(n), a(n);  //vectores para el home y el guest

    for(int i = 0; i < n; i++){
        cin >> h[i] >> a[i];
        for(int j = 0; j < n; j++){
            if(h[i] == a[j]){
                number +=1;
            }
            if(a[i] == h[j]){
                number +=1;
            }
        }
    }

    cout <<number << endl;


    return 0;
}