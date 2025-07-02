#include <bits/stdc++.h>+

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        if(k >= n-1){
            cout << 1;
        }else{
            int roads = 0;
            while(k >= 0){
                if(k == 0){
                    roads = n;
                    break;
                }
                if(n-1-k > 0){
                    roads = n;
                    k = 0;
                    break;
                }else if(n-1-k == 0){
                    roads = 1;
                    k = 0;
                    break;
                }else{
                    k -= n-1;
                    n--;
                }
            }
            cout << roads;
        }
        cout << endl;
    }

    return 0;
}