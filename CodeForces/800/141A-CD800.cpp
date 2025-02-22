#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main(){
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    string fin = s1+s2;
    sort(s3.begin(), s3.end());

    sort(fin.begin(), fin.end());
    if(fin == s3){
        cout << "YES";
    }else{
        cout << "NO";
    }
}