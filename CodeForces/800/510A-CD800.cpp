#include <iostream>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int k = 0;
    bool dir = true;

    while(n--){
        if(k%2 == 0){
            for(int i = 0; i < m; i++){
                cout << "#";
            }
            cout << endl;
        }
        else {
            if(dir == true){
                for(int i = 1; i < m; i++){
                    cout << ".";
                }
                cout << "#" << endl;
                dir = false;
            }
            else{
                cout << "#";
                for(int i = 1; i < m; i++){
                    cout << ".";
                }
                cout << endl;
                dir = true;
            }
        }
        
        k++;
    }


    return 0;
}