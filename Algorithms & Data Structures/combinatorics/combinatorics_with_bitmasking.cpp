#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> todasLasCombinaciones;
    // (1 << n) significa mover el bit 1 hacia la izquierda n posiciones
    // o sea, si tenemos (1 << 3) sería 8, que es 2^3
    //pero tambien porque seria
    // 0001
    // MOVEMOS EL 1 TRES POSICIONES A LA IZQUIERDA
    // 1000
    // que es 8 en decimal
    // y por lo tanto, tenemos 2^n combinaciones posibles
    // donde n es el número de elementos que tenemos
    // y cada combinación se representa como un número binario de n bits
    // donde cada bit indica si el elemento correspondiente está incluido (1) o no (0)
    //PD: Solo sirve para calcular potencias de 2, no sirve para otros números
    //PD2: Si n es mayor a 30, no funciona porque el int no puede almacenar más de 31 bits
    for(int mask = 0; mask < (1 << n); mask++){
        vector<int> combinacionActual;
        for(int i = 0; i < n; i++){
            if(mask & (1 << i)) {
                //COMPARAMOS MASK (0,1,2,3,4,5,6,7 PARA n = 3) con (1 << i) (1,2,4 PARA i = 0,1,2)
                // es decir, dentro de este for hacemos 3 comparaciones si n = 3.
                combinacionActual.push_back(i + 1); // Guardamos el índice + 1 para que sea 1-based
            }
        }
        todasLasCombinaciones.push_back(combinacionActual);
    }

    for(int i = 0; i < todasLasCombinaciones.size(); i++){
        cout << "combinacion " << i << endl;
        for(int elemento : todasLasCombinaciones[i]){
            cout << elemento << " ";
        }
        cout << endl;
    }

    return 0;

}

//COMPLEJIDDAD = O(N * 2^N)