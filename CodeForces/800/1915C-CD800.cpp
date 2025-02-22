#include <iostream>
#include <string>
using namespace std;
typedef long long int lli;

bool bs(lli left, lli right, lli target){
    while(left <= right){
        lli mid = left + (right-left) / 2;
        if(mid <= target/mid){
            if(mid*mid ==target){
                return true;
            }
            left = mid+1;

        } else {
            right = mid - 1;
        }
    }
    return false;
}
int main() {
    lli t, n, a;
    cin >> t;
    while (t--) {
        cin >> n;
        lli targ = 0;
        while (n--) {
            cin >> a;
            targ = targ + a;
        }
        if (bs(1, targ, targ)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
    }

    return 0;
}