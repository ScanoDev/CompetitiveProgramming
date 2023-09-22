#include <iostream>

using namespace std;

int main(){
    int t,c;
    cin >> t;
    int v[t];
    int ma, me;
    int ka = 0;
    int ke = 0;
    for(int i = 0; i < t; i++){
        cin >> c;
        v[i] = c;
    }    
    
    me = v[0];
    ma = v[0];
    for(int i = 1; i < t; i++){
        if(me >= v[i]){
            me = v[i];
            ke = i;
        }else{
            continue;
        }
    }
    
    for(int i = 1; i < t; i++){
        if(ma < v[i]){
            ma = v[i];
            ka = i;
        }
    }
    int r,r1,r3;

    if(ke == (t-1) && ka == 0){
        r3 = 0;
    }else{
        if(ke > ka){
            r = ka;
            r1 = (t-1)-ke;
            r3 = r+r1;
        }else if(ke < ka){
            r = ka;
            r1 = (t-1)-(ke+1);
            r3 = r+r1;
        }if(ke == (t-1) && ka == 0){
            r3 = 0;
        }
    }
    
    cout << r3<<endl;

    return 0;
}