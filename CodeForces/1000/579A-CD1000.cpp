#include<cstdio>
int main(){
    int n,an=0;
    scanf("%d",&n);
    while(n){
        if(n&1)an++;
        n>>=1;
    }
    printf("%d\n",an);
    return 0;
}

//EXPLICACIÓN if(n&1) AND bit a bit
//1 si ambos bits son 1; de lo contrario, 
//devuelve 0
//EJEMPLO:
// al hacer 5 & 3
//   5 =  0101  (en binario)
//   3 =  0011  (en binario)
//-------------
//  5 & 3 =  0001  (resultado de aplicar AND bit a bit)
//EJEMPLO 2:
//  5 (101)
//  1 (001)
//-------
//  1 (001)  // El último bit es 1

//Operador >>=
//Operador de esplazamiento a la derecha compuesto
//Es una forma abreviada de escribir n = n >> 1;
// El operador >> desplaza los bits de un numero hacia la derecha
//cada vez que desplazamos los bits hacia la derecha, divides el numero entre 2
//descartando el bit menos significativo
// EJMPLO:
//1000 (8 en binario)
// >> 1
// 0100 (4 en binario)
// mira que el 1 se desplazó una vez a la derecha