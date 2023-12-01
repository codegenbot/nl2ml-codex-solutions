#include <iostream>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool is_multiply_prime(int a) {
    int count = 0;
    for (int i = 2; i <= a; i++) {
        if (is_prime(i) && a % i == 0) {
            count++;
        }
    }
    return count == 3;
}