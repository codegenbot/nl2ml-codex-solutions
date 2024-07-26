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

int calculateModp() {
    int n, p;
    std::cin >> n >> p;
    return modp(n, p);
}

int main() {
    std::cout << calculateModp() << std::endl;
    return 0;
}