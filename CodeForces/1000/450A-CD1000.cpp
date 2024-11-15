#include <iostream>
#include <utility>

using namespace std;

int main(){
    int n, m, max=0, i=0;
    pair<int,int>res(0,0);
    cin >> n >> m;
    while(n--){
        i++;
        int a;
        cin >> a;
        if(a >= max){
            max = a;
            res.first=a;
            res.second = i;
        }//(1,1), ()
    }
    cout << res.second;



    return 0;
}