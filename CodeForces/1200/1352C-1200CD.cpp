#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long n, k;
        cin >> n >> k;
        
        long long full = (k - 1) / (n - 1);
        long long pos = (k - 1) % (n - 1) + 1;
        long long res = full * n + pos;
        
        cout << res << "\n";
    }
    
    return 0;
}
