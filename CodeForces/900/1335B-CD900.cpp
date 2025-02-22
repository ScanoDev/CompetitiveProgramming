#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    int arr[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    while(t--){
        int n,a,b;
        cin >> n >> a >> b;
        string s;
        char use[b];
        for(int i = 0; i < b; i++){
            use[i] = arr[i];
        }
        int k = 0;
        for(int i = 0; i < n; i++){
            int val;
            for(int j = 0; j < b; j++){
                s += use[j];
                if(j == b-1){
                    val = b-1;
                    i += val;
                }
            }
        }
        while(s.length() != n){
            s.pop_back();
        }
        cout << s << endl;
    }



    return 0;
}