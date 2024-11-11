// Technique used for this problem: Sliding windOW

#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long current_sum = 0;
    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }

    long long min_sum = current_sum;
    int min_index = 0;

    for (int i = k; i < n; i++) {
        current_sum = current_sum - arr[i - k] + arr[i]; 
        if (current_sum < min_sum) {
            min_sum = current_sum;
            min_index = i - k + 1;
        }
    }

    cout << min_index + 1 << endl; 

    return 0;
}
