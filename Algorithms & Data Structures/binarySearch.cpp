#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& vec, int low, int high, int x){

    if(high >= low) {
        int mid = low + (high-low)/2;
        
        if(vec[mid] == x){
            return mid;
        }

        if(vec[mid] > x){
            return binarySearch(vec, low, mid-1, x);
        }

        return binarySearch(vec, low+1, high, x);

    }
    return -1;

}

int main(){
    vector<int> v = {1,2,3,3,3,5,6,7,7,23,46,54};
    int target = 54;
    int n = v.size()-1;
    int result = binarySearch(v, 0, n, target);
    cout << result;

    return 0;
}



/* ITERATIVE
int binarySearch(int arr[], int low, int high, int x)
{
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if x is present at mid
        if (arr[mid] == x)
            return mid;

        // If x greater, ignore left half
        if (arr[mid] < x)
            low = mid + 1;

        // If x is smaller, ignore right half
        else
            high = mid - 1;
    }

    // If we reach here, then element was not present
    return -1;
}
*/