/*
    Sebastian Cano
    EAFIT University 
    Took from Bidhan Roy

*/

using namespace std;
#include <bits/stdc++.h>
 
typedef long long i64;
typedef unsigned long long ui64;
typedef string st;
typedef vector<int> vi;
typedef vector<st> vs;
typedef map<int,int> mii;
typedef map<st,int> msi;
typedef set<int> si;
typedef set<st> ss;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
 
#define mx 0
 
int main(){
    ios_base::sync_with_stdio(0);

    i64 n, k=0, res=0;
    cin >> n;
    vi vec;
    bool next = false;
    while(n--){
        i64 p;
        cin >> p;
        if(next == false){
            vec.push_back(p);
            next = true;
        }
        sort(vec.begin(), vec.end());
        i64 max = vec[vec.size()-1];
        i64 min = vec[0];
        if((p < min) || (p > max)){ 
            res++;
        }
        if(next == true && k == 1){
            vec.push_back(p);
        }
        k = 1;
        
    }
    cout << res;
    
    

    return 0;
}