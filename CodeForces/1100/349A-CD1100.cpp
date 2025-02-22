#include <iostream>

using namespace std;

int main() {
    int ns;
    cin >> ns;
    int count25 = 0; // Contador de billetes de 25
    int count50 = 0; // Contador de billetes de 50

    bool done = true; // Variable para determinar si es posible dar cambio

    while (ns--) {
        int n;
        cin >> n;

        if (n == 25) {
            // Si es un billete de 25, simplemente lo aceptamos
            count25++;
        } else if (n == 50) {
            // Si es un billete de 50, necesitamos un billete de 25 como cambio
            if (count25 > 0) {
                count25--;
                count50++;
            } else {
                done = false; // No hay cambio disponible
                break;
            }
        } else if (n == 100) {
            // Si es un billete de 100, intentamos dar cambio
            if (count50 > 0 && count25 > 0) {
                // Dar cambio usando un billete de 50 y uno de 25
                count50--;
                count25--;
            } else if (count25 >= 3) {
                // Dar cambio usando tres billetes de 25
                count25 -= 3;
            } else {
                done = false; // No hay suficiente cambio
                break;
            }
        }
    }

    if (done) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
