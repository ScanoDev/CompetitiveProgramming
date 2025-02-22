#include <iostream>

using namespace std;

int main(){
    int n, m, k, days, i = 1,aux = 0;
    cin >> n >> m;
    //n = 9  m = 3
    k = n; // 9
    days = n; // 9
    bool finish = false;
    while(finish != true){
        aux = i * m; // 6
        if(aux <= days){ // 6 < 9
            days++; // 13
            k++;
            i++; // 5
        } else {
            finish = true;
        }
    }
    cout << days;

    return 0;
}