#include <bits/stdc++.h>

using namespace std;

int main(){
    int n=0;
    string s = "tttttttttttttt";
    string si = "geeksforgeeks";
    for(char c : s){
        n++;
    }
    cout << n << endl;
    n=0;
    for(char c : si){
        n++;
    }
    cout << n;

    return 0;
}