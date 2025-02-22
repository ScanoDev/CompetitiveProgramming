#include <iostream>
using namespace std;

int main(){

    int n,res=0;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        if(s[0] == '+' || s[2] == '+'){
            res++;
        }else{
            res--;
        }

    }
    cout << res;

    return 0;
}