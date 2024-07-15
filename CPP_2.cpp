#include <iostream>
#include <cmath>
#include <cassert>

double truncate_number(double number) {
    return number - std::floor(number);
}

int main() {
    assert(std::abs(truncate_number(123.456) - 0.456) < 1e-4);
    
    std::cout << "Test cases passed." << std::endl;
    
    return 0;
}