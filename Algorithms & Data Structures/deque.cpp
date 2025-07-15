#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> dq;

    // Insertar elementos
    dq.push_back(10);     // Inserta al final
    dq.push_front(5);     // Inserta al frente
    dq.push_back(20);
    dq.push_front(1);

    cout << "Deque después de insertar elementos:\n";
    for (int x : dq)
        cout << x << " ";
    cout << "\n";

    // Acceder al frente y al final
    cout << "Frente: " << dq.front() << "\n";
    cout << "Final: " << dq.back() << "\n";

    // Insertar en una posición específica (2da posición)
    auto it = dq.begin();
    dq.insert(it + 1, 99);  // Inserta 99 en la segunda posición

    cout << "Deque después de insertar 99 en la segunda posición:\n";
    for (int x : dq)
        cout << x << " ";
    cout << "\n";

    // Eliminar elementos
    dq.pop_front();  // Elimina el primero
    dq.pop_back();   // Elimina el último

    cout << "Deque después de eliminar el frente y el final:\n";
    for (int x : dq)
        cout << x << " ";
    cout << "\n";

    // Eliminar un elemento en posición específica
    it = dq.begin() + 1;
    dq.erase(it);  // Elimina el segundo elemento (actual)

    cout << "Deque después de borrar el segundo elemento:\n";
    for (int x : dq)
        cout << x << " ";
    cout << "\n";

    // Limpiar todo
    dq.clear();
    cout << "Deque después de clear (tamaño = " << dq.size() << ")\n";

    return 0;
}
