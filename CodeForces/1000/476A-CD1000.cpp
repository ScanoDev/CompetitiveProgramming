#include <iostream>

using namespace std;

int main(){
    int n,m,one,two,sum;
    cin >> n >> m;
    if(n<m){
        cout << -1;
    }else if(n == m){
       cout << m; 
    }else{
        int curr = n/2; //curr = 5000
        if(curr%m == 0 && n%2 == 0){
            cout << n/2;
        }else{
            for(int i = 1; i <= m; i++){
                if((curr+i)%m == 0){
                    cout << curr+i;
                }
            }
        }
        

    }

    return 0;
}