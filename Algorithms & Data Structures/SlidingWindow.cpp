// These problems generally require findin
//maximum/minimum subarray, subtrings which satisfy
//some specific condition


// *** FIND THE MAXIMUM SUM OF ALL SUBARRAYS OF SIZE K ***

#include <bits/stdc++.h>
using namespace std;

int maxSum(vector<int>& arr, int n, int k){
    // No es tan necesario
    if(n <= k){
        cout << "INVALID";
        return -1;
    }

    //sumamos los primeros k numeros
    int max_sum = 0;
    for(int i = 0; i < k; i++){ // [0, k)
        max_sum += arr[i];
    }

    int window_sum = max_sum;
    for(int i = k; i< n; i++){ // [k, n) empezamos desde k hasta n
        window_sum += arr[i] - arr[i-k]; //restamos el primero del window anterior
        max_sum = max(max_sum, window_sum);
    }
    return max_sum;

}

int main(){
    vector<int> arr = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k = 4;
    int n = arr.size();
    
    cout << maxSum(arr, n, k);

    return 0;
}