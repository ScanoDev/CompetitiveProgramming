#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, int> myMap;
        for(int i = 0; i < edges.size(); i++){
            myMap[edges[i][0]]++;
            myMap[edges[i][1]]++;
            if(myMap[edges[i][0]] > 1){
                return edges[i][0];
            }
            if(myMap[edges[i][1]] > 1){
                return edges[i][1];
            }
        }
        return -1;
    }
};