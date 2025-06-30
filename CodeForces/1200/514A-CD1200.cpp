#include <bits/stdc++.h>
using namespace std;

int main(){
    long long x;
    cin >> x;
    string n = to_string(x);
    string res = "";
    long long it = 0;
    for(char c : n){
        if(it == 0 && n[it] == '9'){
            res += c;
        }
        else{
            if(c - '0' > 4){
                long long fit = ('9'-'0') - (c-'0');
                string sfit = to_string(fit);
                res += sfit;
            }else{
                res += c;
            }
        }
        it++;
    }
    
    cout << res;

    return 0;
}