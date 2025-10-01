#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,l,r;
        cin >> n >> m >> l >> r;
        int lp=0, rp=0;
        for(int i = 0; i < m; i++){
            if(i%2 == 0){
                if(lp > l){
                    lp--;
                }else if(rp < r){
                    rp++;
                }
                else{
                    break;
                }
            }
            else if(i%2 != 0){
                if(rp < r){
                    rp++;
                }else if(lp > l){
                    lp--;
                }
                else{
                    break;
                }
            }
        }
        cout << lp << " " << rp << endl;
    }

    return 0;
}

//-6 -5 -4 -3 -2 [-1 0 1] 2 3