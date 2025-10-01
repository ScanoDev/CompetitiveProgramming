#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        int wins = 0;
        
        int suneet_rounds_1 = 0;
        if(a > c) suneet_rounds_1++;
        if(b > d) suneet_rounds_1++;
        if(suneet_rounds_1 > 1) wins++; // Suneet gana si gana más de 1 ronda
        
        int suneet_rounds_2 = 0;
        if(a > d) suneet_rounds_2++;
        if(b > c) suneet_rounds_2++;
        if(suneet_rounds_2 > 1) wins++;
        
        int suneet_rounds_3 = 0;
        if(b > c) suneet_rounds_3++;
        if(a > d) suneet_rounds_3++;
        if(suneet_rounds_3 > 1) wins++;
        
        int suneet_rounds_4 = 0;
        if(b > d) suneet_rounds_4++;
        if(a > c) suneet_rounds_4++;
        if(suneet_rounds_4 > 1) wins++;
        
        cout << wins << endl;
    }
    
    return 0;
}
