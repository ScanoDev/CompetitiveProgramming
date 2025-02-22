#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    int high=0,low=0;
    int res=0;
    cout << height.size();
    while(high < height.size()){
        int it = high-low-1;
        int lowSum = low+1;
        if(height[high] >= height[low]){
            while(it--){
                if(lowSum < height.size()){
                    res += height[low]-height[lowSum];
                    lowSum++;    
                }
               cout << "ejecutando..." << endl;   
            }
            low = high;
        }
        high++;
    }

    cout << "yes";

    return 0;
}