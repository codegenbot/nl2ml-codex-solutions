#include <iostream>
#include <cassert>
#include <string>

using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

bool prime_length(string str) {
    int length = str.length();
    return is_prime(length);
}

int main() {
    assert(prime_length("0") == false);
    assert(prime_length("hello") == true);
    return 0;
}