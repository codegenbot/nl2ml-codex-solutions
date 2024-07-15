#include <iostream>

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int x_or_y(int n, int x, int y) {
    if (is_prime(n)) {
        return x;
    } else {
        return y;
    }
}

int main() {
    int n, x, y;
    std::cin >> n >> x >> y;
    std::cout << x_or_y(n, x, y) << std::endl;
    return 0;
}