#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector <string> v;
    string s;
    for(int i = 0; i < n; i++){
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end());
    if(n == 1){
        cout << s;
    }else{
        if(v[n/2] == v[0]){
            cout << v[0];
        }
        else{
            cout << v[n-1];
        }
    }
    
    return 0;
}