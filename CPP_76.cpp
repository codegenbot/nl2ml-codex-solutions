#include <iostream>
#include <cmath>

bool is_simple_power(int x, int n) {
    if (x <= 0 || n <= 0) {
        return false;
    }
    double root = pow(x, 1.0 / n);
    return (pow(static_cast<int>(root), n) == x);
}

int main() {
    assert(is_simple_power(1, 12)==true);
    // Add more test cases if needed
    return 0;
}