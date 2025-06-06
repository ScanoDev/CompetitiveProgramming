#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int nval = n;
    vector<int> v;
    n--;
    while(n--){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    
    for(int i = 0; i < nval; i++){
        int val = i+1;
        if(v[i] == val){
            continue;
        }else{
            cout << val;
            break;
        }
    }

    return 0;
}