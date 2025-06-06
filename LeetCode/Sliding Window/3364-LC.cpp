#include <bits/stdc++.h>
using namespace std;

int smallest(int num1, int num2){
    if(num1 > 0 && num2 > 0){
        return min(num1, num2);
    }if(num1 > 0 && num2 < 1){
        return num1;
    }if(num1 < 1 && num2 > 0){
        return num2;
    }
    return -1;
}


int main(){
    vector<int> nums = {-1,2,3};

    

    return 0;
}