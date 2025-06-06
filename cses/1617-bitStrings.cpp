#include <iostream>

long long power(long long base, long long exp) {
    long long res = 1;
    long long mod = 1000000007;

    base %= mod;
    if (base < 0) base += mod;

    while (exp > 0) {
        if (exp % 2 == 1) {
            res = (res * base) % mod;
        }

        base = (base * base) % mod;

        exp /= 2;
    }
    return res;
}

int main() {
    long long t;
    std::cin >> t;

    long long res_mod = power(2, t);

    std::cout << res_mod << std::endl;

    return 0;
}