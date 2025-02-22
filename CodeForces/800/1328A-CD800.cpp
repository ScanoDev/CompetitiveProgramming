
#include <iostream>
 
using namespace std;
 
int main(){
    int t,a,b;
    cin >> t;
    int v[2][t];
    int r[t];
    for(int i = 0; i < t; i++){
        cin >> a;
        v[0][i] = a;
        cin >> b;
        v[1][i] = b;
    }
 
    for(int i = 0; i < t; i++){
        int currA = v[0][i];
        int currB = v[1][i];
        int val = currB - (currA%currB);
        if(val == currB){
            r[i] = 0;
        }else{
            r[i] = val;
        }
    }
 
    for(int i = 0; i <t; i++){
        cout << r[i] << endl;
    }
    return 0;
}