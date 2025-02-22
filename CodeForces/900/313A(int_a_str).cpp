#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;

    if(n >= 0){
        cout << n;
    }else{
        int num = abs(n);
        string str = to_string(num);
        for(char p : str){
            int c = p-'0';
            v.push_back(c);
        }
        int s = v.size();
        if(v[s-1] > v[s-2]){
            v.pop_back();
        }else if(v[s-1] < v[s-2]){
            swap(v[s-1], v[s-2]);
            v.pop_back();
        }else{
            v.pop_back();
        }
    }

    
    
    if(n < 0){
        if(v[0] > 0){
            cout << "-";
        }
        for(int i = 0; i < v.size(); i++){
            cout << v[i];
        } 
    }
    

    return 0;
}
