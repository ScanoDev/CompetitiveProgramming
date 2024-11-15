#include <iostream>

using namespace std;

int main(){
    int t,n,max=0;

    cin >> t;
    while(t--){
        cin >> n;
        string s;
        cin >> s;
        int k[s.length()];
        for(int i = 0; i <= s.length(); i++){
            if(s[i] == '('){
                if(i == 0){
                    max = i;
                    k[i] = 1;
                }else{
                    k[i] = k[i-1]+1;
                    if(k[i] < max){
                        max = k[i];
                    }
                }
            }else if(s[i] == ')'){
                if(i == 0){
                    max = -1;
                    k[i] = -1;
                }else{
                    k[i] = k[i-1]-1;
                    if(k[i] < max){
                        max = k[i];
                    }
                }
            }
        }
        cout << max*-1<<endl;
    }

    return 0;
}