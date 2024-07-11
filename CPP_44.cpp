#include <string>
#include <iostream>
#include <cassert> // Add this for assert

std::string change_base(int x, int base) {
    std::string result = "";
    while (x > 0) {
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result;
}

void solve_problem() {
    int x = 42;
    int base = x + 1;

    if (base != 0 && x >= 0) {
        std::string result = change_base(x, base);
        std::cout << "Result: " << result << std::endl;
        assert(change_base(x, x + 1) == std::to_string(x)); // Use std::to_string
    } else {
        std::cout << "Invalid input!" << std::endl;
    }
}

int main() {
    solve_problem();
    return 0;
}