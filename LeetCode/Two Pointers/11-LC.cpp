#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int low=0, high=height.size()-1;
        int area;
        vector<int> v;
        while(low < high){
            area = min(height[low], height[high])*(high-low);
            v.push_back(area);
            if(height[low] < height[high] && (high-low) != 1){
                low++;
            }else if(height[low] > height[high] && (high-low) != 1){
                high--;
            } else{
                area = min(height[low], height[high])*(high-low);
                v.push_back(area);
                low++;
                high--;
                continue;
            }
            area = min(height[low], height[high])*(high-low);
            v.push_back(area);
        }
        sort(v.begin(), v.end());
        return v[v.size()-1];

    }
};