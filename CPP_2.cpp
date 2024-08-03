#include <cassert>
#include <cmath>
#include <iostream>

double truncate_number(double number) {
    return number - floor(number);
}

int main() {
    double input;
    std::cin >> input;
    std::cout << truncate_number(input) << std::endl;
    return 0;
}