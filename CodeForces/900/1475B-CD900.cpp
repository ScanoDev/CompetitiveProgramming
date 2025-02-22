#include <bits/stdc++.h>

#include <utility>
using namespace std;

using pii = pair<int, int>;

int main() {
  int test;
  cin >> test;
  while (test-- > 0) {
    int n;
    cin >> n; // 4041
    int cnt2021 = n % 2020; //numero de veces que 2021 aparece en la suma
    //ahora, al total le restamos el cnt2021 para que n sea
    //divisible por 2020, una vez hecho esto, obtendremos
    //un cnt2020 parcial, por que digamos que si el cnt2021 es 2
    //al calcular el cnt2020, al sumarle 2 al n, realment no
    //influye por la magnitud tan grande del numero 2020,
    //por eso, debemos restar el cnt2021, obteniendo asi las veces
    //que se encuentra el 2020
    int cnt2020 = (n - cnt2021) / 2020 - cnt2021; //
    //aqui ponemos 2020 * x + 2021 * y = n
    if (cnt2020 >= 0 && 2020 * cnt2020 + 2021 * cnt2021 == n) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}