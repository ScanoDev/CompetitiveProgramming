#include <iostream>
#include <vector>
#include <algorithm>

typedef long long lli;
using namespace std;

lli calculateDP(int i, const vector<lli>& a, vector<lli>& dp, int n) {
    if (i >= n) return 0;            // Fuera de rango, no acumula nada
    if (dp[i] != -1) return dp[i];   // Si ya está calculado, usa el resultado
    lli next_index = i + a[i];
    if (next_index < n) {
        dp[i] = a[i] + calculateDP(next_index, a, dp, n); // Acumula recursivamente
    } else {
        dp[i] = a[i]; // Caso base, no puede avanzar más
    }
    return dp[i];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<lli> a(n);
        vector<lli> dp(n, -1); // Inicializamos dp con -1 (no calculado)

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Calcula todos los valores de dp
        for (int i = 0; i < n; i++) {
            calculateDP(i, a, dp, n);
        }

        // Encuentra el máximo en dp
        lli maxx = *max_element(dp.begin(), dp.end());
        cout << maxx << endl;
    }

    return 0;
}
