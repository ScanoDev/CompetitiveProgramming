#include <bits/stdc++.h>
using namespace std;

int main(){

    int n1,n2,n3,x1=0,x2=0,x3=0;
    cin >> n1 >> n2 >> n3;
    queue<int> q1;
    queue<int> q2;
    queue<int> q3;
    bool flag = false;
    while(n1--){
        int h;
        cin >> h;
        x1 += h;
        q1.push(h);
    }
    while(n2--){
        int h;
        cin >> h;
        x2 += h;
        q2.push(h);
    }
    while(n3--){
        int h;
        cin >> h;
        x3 += h;
        q3.push(h);
    }
    while(!flag){
        int maxVal = max(x1, max(x2, x3));
        if(x1 == x2 && x2 == x3){
            flag = true;
            cout << x1;
            break;
        }
        else if(maxVal == x1){
            x1 -= q1.front();
            q1.pop();
        }else if(maxVal == x2){
            x2 -= q2.front();
            q2.pop();
        }else{
            x3 -= q3.front();
            q3.pop();
        }
    }
    


    return 0;
}