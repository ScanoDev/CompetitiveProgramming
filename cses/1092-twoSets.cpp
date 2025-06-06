#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, number;
    vector<long long>set1;
    vector<long long>set2;
    deque<long long> deq;
    cin >> n;
    number = n;
    n = (n*(n+1))/2;
    for(int i = 1; i <= number; i++){
        deq.push_back(i);
    }
    if(n%2 == 0){
        cout << "YES" << endl; 
        if(number%2 == 0){
            for(long long i = 0; i < number/2; i++){
                long long val1,val2;
                val1 = deq.back();
                val2 = deq.front();
                deq.pop_back();
                deq.pop_front();
                if(i%2 == 0){
                    set1.push_back(val1);
                    set1.push_back(val2);
                }else{
                    set2.push_back(val1);
                    set2.push_back(val2);
                }
            }
            cout << set1.size() << endl;
            for(long long c : set1){
                cout << c << " ";
            }
            cout << endl;
            cout << set2.size() << endl;
            for(long long c : set2){
                cout << c << " ";
            }
        }else{
            long long val3 = deq.back();
            deq.pop_back();
            for(long long i = 0; i < number/2; i++){
                long long val1,val2;
                val1 = deq.back();
                val2 = deq.front();
                deq.pop_back();
                deq.pop_front();
                if(i%2 == 0){
                    set1.push_back(val1);
                    set1.push_back(val2);
                }else{
                    set2.push_back(val1);
                    set2.push_back(val2);
                }
            }
            cout << set1.size() << endl;
            for(long long c : set1){
                cout << c << " ";
            }
            cout << endl;
            set2.push_back(val3);
            cout << set2.size() << endl;
            for(long long c : set2){
                cout << c << " ";
            }
        }
    }else{
        cout << "NO";
    }

    return 0;
}


// 8 -> 1,2,3,4,5,6,7,8
// 8 -> 1,8,3,6 || 2,7,4,5 == 18

// 7 -> 1,2,3,4,5,6,7 == 28
// 7 -> 1,7 || 6,2

//11 -> 1,2,3,4,5,6,7,8,9,10,11 == 66
// 33 ->1,10,2,9,4,7
// 33 ->11,3,8,5,6