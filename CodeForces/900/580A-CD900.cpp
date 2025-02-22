#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t, c;
    cin >> t;
    int v[t];
    for (int i = 0; i < t; i++) {
        cin >> c;
        v[i] = c;
    }
    int k = 0;
    vector<int> ki;
    for (int i = 1; i < t; i++) {
        if (v[i] >= v[i - 1]) {
            k += 1;
        } else {
            ki.push_back(k + 1);
            k = 0;
        }
    }
    ki.push_back(k + 1);  // Agrega el último valor de k a ki.

    int longitud = ki.size();  // Usar size() para obtener la longitud.
    int max = ki[0];
    for (int i = 1; i < longitud; i++) {
        if (ki[i] > max) {
            max = ki[i];
        }
    }
    cout << max;

    return 0;
}
