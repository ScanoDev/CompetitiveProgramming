#include <iostream>
#include <unordered_map> // Para usar mapas
using namespace std;
typedef long long lli;

int main() {
    int n;
    cin >> n;

    lli line1[n], line2[n - 1], line3[n - 2];
    unordered_map<lli, int> count1, count2, count3;

    for (int i = 0; i < n; i++) {
        cin >> line1[i];
        count1[line1[i]]++;
    }

    for (int i = 0; i < n - 1; i++) {
        cin >> line2[i];
        count2[line2[i]]++;
    }

    for (int i = 0; i < n - 2; i++) {
        cin >> line3[i];
        count3[line3[i]]++;
    }

    lli fi = 0, se = 0;
    for (auto &x : count1) {
        if (count2[x.first] < x.second) {
            fi = x.first;
            break;
        }
    }

    for (auto &x : count2) {
        if (count3[x.first] < x.second) {
            se = x.first;
            break;
        }
    }

    cout << fi << endl << se << endl;

    return 0;
}
