#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int total= a; 
    int restantes = a;

    while (restantes >= b) {
        int new_a = restantes / b;
        total += new_a;
        restantes = restantes % b + new_a;
    }

    cout << total;
    return 0;
}