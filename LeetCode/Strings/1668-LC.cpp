#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int k = 0;
        string repeated = word;
        while(sequence.find(repeated) != string::npos) {
            repeated += word;
            k++;
        }
        return k;
    }
};