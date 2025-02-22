#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<pair<int, int>> pairs;
    
    while(n--){
        int a,b;
        cin >> a >> b;
        pairs.push_back(make_pair(a,b));
    }
    sort(pairs.begin(), pairs.end());
    bool alex = false;
    for(int i = 1; i < pairs.size(); i++){
        if(pairs[i].second < pairs[i-1].second){
            cout << "Happy Alex";
            alex = true;
            break;
        }
    }

    if(alex == false){
        cout << "Poor Alex";
    }
    return 0;
}