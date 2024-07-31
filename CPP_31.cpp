#include <cassert>

bool is_prime(int n) {
    bool is_divisor = false;
    for (long long i = 2; i * i <= n && !is_divisor; ++i) {
        if (n % i == 0) {
            is_divisor = true;
        }
    }
    return !is_divisor;
}

int main() {
    assert(is_prime(13441 * 19) == false);
    // ...
}