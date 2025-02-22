#include <iostream>

using namespace std;

int main(){
    int n;
    int cnt1 = 0, cnt0 = 0;
    cin >> n;
    string a;
    cin >> a;
    for(char c : a){
        if(c == '1'){
            cnt1++;
        }else{
            cnt0++;
        }
    }
    if(cnt1 == cnt0){
        cout << 0;
    } else if(cnt0 > cnt1){
        cout << cnt0-cnt1;
    } else {
        cout << (cnt0-cnt1)*-1;
    }   


    return 0;
}