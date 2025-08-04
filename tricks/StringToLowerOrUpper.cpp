#include <bits/stdc++.h>

using namespace std;

int main(){
    string s2 = "HOLA";
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    cout << s2;

    return 0;
}