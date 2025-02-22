#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int x1,x2,x3,x4,a ,b, c;
    cin >> x1 >> x2 >> x3 >> x4;
    int arr[] = {x1, x2, x3, x4};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr+size);

    int bAux;
    b = (arr[0] + arr[2]) - arr[3];
    a = arr[0] - b;
    c = arr[2] - b;
    cout << a << " " << b << " " << c;

    return 0;
}