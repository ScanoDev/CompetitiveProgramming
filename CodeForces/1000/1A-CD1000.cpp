#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long n,m,a;
    cin >> n >> m >> a;

    long long res;
    //ceil(m/a)*ceil(n/a)
    res = ((m+a-1)/a)*((n+a-1)/a);

    cout << res;
    
    
}