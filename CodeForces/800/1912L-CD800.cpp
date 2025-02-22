#include <iostream>
#include <map>
using namespace std;

int main(){
    int n, l, o, k;
    string s;
    cin >> n;
    cin >> s;
    int oN = 0;
    int lN = 0;
    
    for(int i = 1; i <= n; i++){
        if(s[i-1] != s[i]){
            k++;
        }
    }
    for(char c : s){
        if(c == 'O'){
            oN++;
        }else if(c == 'L'){
            lN++;
        }

    }

    if(k >2 && k == n){
        cout << -1;
    }else{
        cout << lN;
    }


    return 0;
}