#include <iostream>
using namespace std;

int main(){
    long long int n,m,a,curr,res=0;
    cin >> n >> m;
    curr = m;
    long long int arr[m];
    long long int i = 0;
    while(curr--){
        cin >> a;
        arr[i] = a;
        if(i == 0){
            res += arr[i]-1;
        }
        else{
           if(arr[i-1] > arr[i]){
                res += n -arr[i-1]+1+(arr[i]-1);
            }
            else if(arr[i-1] < arr[i]){
                res += arr[i]-arr[i-1];
            }
            else if(arr[i-1] == arr[i]){
                res = res;
            } 
        }
        
        i++;
    }
    cout << res;

    return 0;
}