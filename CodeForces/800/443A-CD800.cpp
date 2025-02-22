#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){

    string s;
    getline(cin, s);
    set<char> d;
    int res;

    for(char c : s){
        if(d.find(c) == d.end()){ //si el .find no encuentra
        //devuelve un .end que es un iterador como el .find, asi que
        //si no lo encuentra entonces es igual a .end y pasa
            d.insert(c);
        }
        
    }
    
    res = d.size()-4;
    if(s.size() == 3){
        cout << 1;
    }
    else if(res < 0){
        cout << 0;
    }else{
        cout << res;
    }
    
    return 0;

}


//size = size-2-(size-1)