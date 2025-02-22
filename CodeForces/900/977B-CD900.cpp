#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <limits>
using namespace std;

int main(){
    //el map se organiza en orden, el unordered map
    //no tiene un valor en particular
    int n, k = 0;
    cin >> n;
    string s;
    cin >> s;
    vector<string> v;
    unordered_map<string, int> mapa;
    string aux;
    string max;
    int max_valor = numeric_limits<int>::min();
    for(int i = 0; i < n-1; i++){
        aux = s.substr(i, 2);
        mapa[aux] += k+1;
    }

    for(const auto& par : mapa){
        if(par.second > max_valor) {
            max_valor = par.second;
            max = par.first;
        }
    }
    if(n == 2 || n == 3){
        string s1 = s.substr(0,2);
        cout << s1;
    } else {
        cout << max;
    }
    
    

    return 0;
}