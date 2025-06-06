#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int, int> myMap;

    for(int i = 0; i < 10; i++){
        myMap[i] += i;
    }
    for(int i = 0; i < 15; i++){
        if(myMap[i] > 0){
            cout << "exists" << endl;
        }else{
            cout << "does not exist" << endl;
        }
    }


    return 0;
}