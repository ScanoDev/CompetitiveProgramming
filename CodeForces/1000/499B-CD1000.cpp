#include <iostream>
#include <map>
using namespace std;

int main(){

    int n,m;
    string s1,s2;
    cin >> n >> m;
    map<string, string> mp;
    for(int i = 0; i < m; i++){
        cin >> s1 >> s2;
        mp.insert(make_pair(s1,s2));
    }
    int tam1,tam2;
    while(n--){
        cin >> s1;
        string val1=mp[s1], val2=s1;
        tam1 = val1.length();
        tam2 = val2.length();
        if(tam1 > tam2){
            cout << val2 << " ";
        }else if(tam1 == tam2) {
            cout << val2 << " ";
        }else{
            cout << val1 << " ";
        }
    }

    return 0;
}