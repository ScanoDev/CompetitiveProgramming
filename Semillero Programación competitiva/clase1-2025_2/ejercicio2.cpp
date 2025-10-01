#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int m;
        cin >> m;
        vector<int> v;
        int n1 = 0;
        while(m--){
            int a;
            cin >> a;
            v.push_back(a);
            if(a == 1) n1++;
        }
        int n2 = v.size()-n1;
        if(n1%2 == 0){
            n1 = n1/2;
        }else{
            n1 = (n1-1)/2;
            n1++;
        }
        cout << n1 +n2 << endl;
        
    }
    return 0;
}