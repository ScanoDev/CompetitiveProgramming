#include <iostream>
#include <string>
using namespace std;

int main()
{
    string binaryString;
    cout << "Ingresa un número binario (sin el prefijo 0b): ";
    cin >> binaryString;

    // Convertir el string binario a entero
    int number = stoi(binaryString, nullptr, 2);
    // el 2 indica la base, binario es base 2
    // si me dan numeros binarios, para convertirlos a entero uso base 2
    // si me dan numeros enteros en string, para convertirlos a int uso base 10

    cout << "El número en decimal es: " << number << endl;

    return 0;
}

//Source: chatgpt
//time complexity = O(1)