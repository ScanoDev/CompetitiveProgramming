#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n;
        string a, b;
        cin >> a;
        cin >> m;
        cin >> b;
        string order;
        cin >> order;
        deque<char> v;
        for(char c : a){
            v.push_back(c);
        }
        for(int i = 0; i < m; i++){
            if(order[i] == 'V'){
                v.push_front(b[i]);
            }else{
                v.push_back(b[i]);
            }
        }
        for(char c : v){
            cout << c;
        }
        cout << endl;
    }
    return 0;
}