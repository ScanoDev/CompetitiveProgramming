#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int n1,n2,n3;
    n1 = (k*l)/nl;
    n2 = (c*d);
    n3 = p/np;
    int min_val = min({n1, n2, n3});
    cout << min_val/n;
    return 0;
}

// 4*5 =20 | NEED 3 -> 20/3 = 6


//-------------
// 4*5 = 20 | NEED 3 -> 20/3 = 6
// 5*3 = 15
// 10/1 = 10