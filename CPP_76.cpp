#include <iostream>

bool is_simple_power(int x, int n) {
    if (n <= 1) return x == 1;
    if (x < 1) return false;
    while (x % n == 0) {
        x /= n;
    }
    return x == 1;
}

int main() {
    int x, n;
    std::cin >> x >> n;
    if (is_simple_power(x, n)) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
    return 0;
}