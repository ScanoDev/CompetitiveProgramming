#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    vector<long long> v;
    long long res = 0;
    while(t--){
        long long n; 
        cin >> n;
        v.push_back(n);
    }
    // 2 7 1 8 2 8 1 8
    stack<long long> myStack;
    sort(v.begin(), v.end()); // 1 1 2 2 7 8 8 8
    long long target;
    for(long long c : v){
        myStack.push(c);
    }
    while(!myStack.empty()){
        target = myStack.top(); // 1
        long long contador = 0;
        while(!myStack.empty() && myStack.top() == target){ // 1 == 1
            contador++; // 1, 2
            if(contador > target){
                res++; // 5
            }
            if(!myStack.empty()){
                myStack.pop(); // 1
            }
        }
        if(contador < target){ // 1 < 7
            res += contador; // 3, 4
        }
    }
    cout << res;



    return 0;
}

//