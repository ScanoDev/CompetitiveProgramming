#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) { //[1,0,1,4,1,4,1,2,3]
        if(fruits.size() == 1) return 1;
        if(fruits.size() == 2) return 2;
        int count1=1, count2=0;
        int val1=fruits[0], val2=-1;
        int k = 1;
        bool firstStep = false;
        for(int i = 1; i < fruits.size(); i++){
            if(fruits[i] != val1 && firstStep == false){
                val2 = fruits[i];
                count2++;
                firstStep = true;
            }
            else if(fruits[i] != val1 && fruits[i] != val2){
                break;
            }else if(fruits[i] == val1){
                count1++;
            }else if(fruits[i] == val2){
                count2++;
            }
            k++;
        }

        int res = count1+count2;
        //return count1;
        for(int i = k; i < fruits.size(); i++){ ////[0,1,2,2]
            if(fruits[i] == val1){
                cout << "Iteración " << i << " CONTADOR1: " << count1 << endl;
                count1++; // 3
                cout << "Iteración " << i << " CONTADOR1: " << count1 << endl;
            }else if(fruits[i] == val2){
                count2++; // 2
                cout << "Iteración " << i << " CONTADOR2: " << count2 << endl;
            }else{
                int n = i-1;//2
                val1 = fruits[i-1]; //1
                count1 = 0;
                while(n >= 0){
                    if(fruits[n] == val1){
                        count1++; //1
                        cout << "contador 1:-- " << count1 << endl;
                    }else{
                        break;
                    }
                    n--;
                }
                cout << " CONTADOR1: " << count1 << endl;
                count2 = 1; //1
                val2 = fruits[i]; // 4
            }
            res = max(count1+count2, res); // 5
        }
        return res;
    }
};