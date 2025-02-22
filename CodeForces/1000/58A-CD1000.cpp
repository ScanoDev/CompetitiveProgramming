#include <iostream>
#include <string>

using namespace std;

int main(){

    string s, res;
    cin >> s;
    int k = 0;

    for(char c : s){
        if(c == 'h' && k == 0){
            k++; 
        }else if(c == 'e' && k == 1){
            k++;
        }else if(c == 'l' && k == 2){
            k++;
        }else if(c == 'l' && k == 3){
            k++;
        }else if(c == 'o' && k == 4){
            k++;
        }
    }

    if(k == 5){
        cout << "YES";
    }else{
        cout << "NO";
    }


    return 0;
}