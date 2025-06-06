#include <bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(long long i = 1; i <= t; i++){
        long long res = ((i*i)*((i*i)-1))/2;
        long long dif = 4*(i-2)*(i-1);
        cout << res - dif << " ";
    }

    return 0;
}

/*

n = 2*2
k = 2 SIEMPRE
combinaciones = n! / (n-k)! * k!
= 4*3*2*1 / (4-2)! * 2!
= 24 / 2*2 = 24/4
= 6
--------------------------------
n = 3*3
k = 2
= 

*/