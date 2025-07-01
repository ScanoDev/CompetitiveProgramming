#include <iostream>

void solve() {
    int n;
    std::cin >> n;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; ++i) {
        int candy;
        std::cin >> candy;
        if (candy == 1) {
            count1++;
        } else {
            count2++;
        }
    }

    int sum = count1 + 2 * count2;

    if (sum % 2 != 0) {
        std::cout << "NO\n";
        return;
    }

    int half = sum / 2;
    if (half % 2 == 0) {
        std::cout << "YES\n";
    } else {
        if (count1 > 0) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}