#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> digits = {1,2,3,5};
    int tam = digits.size(),inc=1;
        long long val = digits[tam-1];
        for(int i = 1; i < tam; i++){
            inc *= 10;
            val += digits[tam-i-1]*inc;
        }

        cout << val;

    return 0;
}