#include <bits/stdc++.h>
using namespace std;


int Scarerow(string s){
    int tam = s.size(); // 8
    int res=0;
    for(int i = 0; i < tam; i++){
        if(s[i] == '#'){
            continue;
        }else{
            res++;
            if(i+2 < s.size()){
                i+=2;
            }else if(i+1 < s.size()){
                i+=1;
            }
        }
    }
    return res;
}

int main(){
    int t;
    cin >> t;
    int caseNumber = 0;
    while(t--){
        caseNumber++;
        int n;
        cin >> n;
        string s;
        cin >> s;
        int res = Scarerow(s);
        cout << "Case " << caseNumber << ": " << res << endl;

    }

    return 0;
}


// ####.......