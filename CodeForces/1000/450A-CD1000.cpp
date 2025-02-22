#include <iostream>
#include <deque>
#include <utility>

using namespace std;

int main() {
    int n, m, p = 0, res;
    bool finish = false;
    cin >> n >> m;
    deque<pair<int, int>> v;

    // Ingresar los elementos en la deque
    while (n--) {
        p++;
        int a;
        cin >> a;
        v.push_back(make_pair(a, p)); 
    }

    // Procesar los elementos
    while (!finish) {

        if (v.front().first > m) {
            if (v.size() == 1) {
                res = v.front().second;
                finish = true;
            } else {
                v.front().first -= m;
                pair<int, int> temp = v.front();
                v.pop_front();
                v.push_back(temp);
            }
        } else {
            if (v.size() == 1) {
                res = v.front().second;
                finish = true;
            } else {
                // Eliminar el elemento del frente
                v.pop_front();
            }
        }
    }

    cout << res << endl;

    return 0;
}
