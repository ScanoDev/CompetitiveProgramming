#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n == 1){
        cout << 1;
        return 0;
    }
    if(n == 4){
        cout << 2 << " " << 4 << " " << 1 << " " << 3;
        return 0;
    }
    if(n == 2 || n == 3){
        cout << "NO SOLUTION";
        return 0;
    }

    if(n%2 == 0){
        for(int i = n; i >= 2; i-=2){
            cout << i << " ";
        }
        
        for(int i = n-1; i >= 1; i-=2){
            cout << i << " ";
        }
    }else{
        for(int i = n-1; i >= 2; i-=2){
            cout << i << " ";
        }
        
        for(int i = n; i >= 1; i-=2){
            cout << i << " ";
        }
    }

    return 0;
}
/*
1
1

2
NO 

3
NO

4
NO

5
4 2 5 3 1

6
6 4 2 5 3 1

7
6 4 2 7 5 3 1

8
8 6 4 2 7 5 3 1
*/
