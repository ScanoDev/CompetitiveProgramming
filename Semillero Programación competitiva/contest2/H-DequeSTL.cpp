#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// 3 4 6 3 4
// 3, 4: 4
// 4 6 3 4
// 


int main(){
    int t;
    cin >> t;
    vector<int> v;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> res = {};
        while(n--){
            int a;
            cin >> a;
            v.push_back(a);
        }// [3 4 6 3 4]
        int max_sum = 0;
        for(int i = 0; i < k; i++){
            max_sum = max(max_sum, v[i]); //4
        }
        res.push_back(max_sum); // [4]
        for(int i = 1; i < v.size(); i++){
            if((k-1)+i < v.size()){ // 4
                if(v[i+k-1] > max_sum){ // 4 < 6
                    max_sum = v[i+k-1]; // 6
                    res.push_back(max_sum); // [4,6]
                }else{
                    res.push_back(max_sum); // [4,6,6]
                }
            }
        }
        
        for(int c : res){
            cout << c << " ";
        }
        cout << endl;

    }

    return 0;
}