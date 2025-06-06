#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int>> adj(n+1);
        unordered_set<int> answerBank(n);
        unordered_map<int, int> myHash;
        for(int i = 1; i <= n; i++){
            answerBank.insert(i);
        }

        for(int i = 0; i < trust.size(); i++){
            int u, v;
            u = trust[i][0];
            v = trust[i][1];
            adj[u].push_back(v); //u -> v
            answerBank.erase(u);
            myHash[v]++;
        }

        if(answerBank.empty()){
            return -1;
        }else{
            for(int i : answerBank){
                if(myHash[i] == n-1){
                    return i;
                }
            }
        }
        return -1;

        

    }
};