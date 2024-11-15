#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> deck ={1,2,3,4,4,3,2,1};
    sort(deck.begin(), deck.end());
    bool finish = false;
    int n = deck.size();
    bool val = true;
    int indice;
        if(deck[1] != deck[0] || deck[0] == deck[n-1]){
            val = false;
        }
        for(int i = 2; i < deck.size(); i++){
            if(deck[i] = deck[i-1]){
                continue;
            }else{
                indice = i;
                break;
            }
        }
        for(int i = indice; i<deck.size()-indice; i += indice){
            if(deck[i] == deck[indice]){
                continue;
            }else{
                val = false;
            }
        }
        cout << val;

    return 0;
}
    
    