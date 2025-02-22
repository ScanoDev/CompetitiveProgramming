#include <bits/stdc++.h>
using namespace std;

int res = 0;
int main(){
    

    int n = 19;
    int val = n%10;
    res += res * 10 + val;
    cout << res;
    return 0;
}