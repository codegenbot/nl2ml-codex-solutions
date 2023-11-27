#include <iostream>
#include <string>
#include <cassert>

bool prime_length(std::string str) {
    int len = str.length();
    if (len <= 1) {
        return false;
    }
    for (int i = 2; i * i <= len; i++) {
        if (len % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    // Test cases
    assert(prime_length("0") == false);
    // Add more test cases here

    return 0;
}