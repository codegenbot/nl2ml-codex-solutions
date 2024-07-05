#include <cmath>
#include <iostream>

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int x_or_y(int n, int x, int y) {
    return is_prime(n) ? x : y;
}

int main() {
    int n, x, y;
    std::cin >> n >> x >> y;
    std::cout << x_or_y(n, x, y) << std::endl;
    return 0;
}