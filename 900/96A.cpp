#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string t;
    cin >> t;
    vector<int> v;
    for(auto c : t){
        v.push_back(c);
    }
    int res = 0;
    int k = 0;
    for(int i = 1; i < v.size(); i++){
        if(v[i] == v[i-1]){
            k++;
            if(k >= 6){
                res = 7;
            }
        }else{
            k = 0;
        }
    }
    if(res == 7){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}