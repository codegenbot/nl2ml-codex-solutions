#include <string>

bool prime_length(std::string str) {
    int n = str.length();
    bool is_prime = true;

    if (n <= 1)
        return false;
    else if (n == 2)
        return true;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }

    return is_prime;
}

int main() {
    assert(prime_length("0") == false);
    // Other code
}