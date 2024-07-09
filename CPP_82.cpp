#include <string>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool prime_length(string str) {
    return isPrime(static_cast<int>(str.length()));
}