#include <iostream>

int modp(int n, int p) {
    if (p == 1) return 0;
    int result = 1;
    n = n % p;
    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * n) % p;
        }
        n = (n * n) % p;
    }
    return result;
}

// int main() {
//     int n, p;
//     std::cin >> n >> p;
//     std::cout << modp(n, p);
//     return 0;
// }