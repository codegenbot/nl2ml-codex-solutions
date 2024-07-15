#include <iostream>
#include <cmath>
#include <cassert>

double truncate_number(double number) {
    return number - floor(number);
}

int main() {
    double input_number;
    std::cin >> input_number;
    std::cout << truncate_number(input_number) << std::endl;

    return 0;
}