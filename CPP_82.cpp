#include <iostream>
#include <string>
#include <cassert>

bool prime_length(std::string str) {
    int length = str.length();
    if (length <= 1) {
        return false;
    }
    for (int i = 2; i * i <= length; i++) {
        if (length % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    // Test the prime_length function
    assert(prime_length("0") == false);

    return 0;
}