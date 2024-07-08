#include <iostream>
#include <cmath>
#include <cassert>

double truncate_number(double number) {
    return number - floor(number);
}

double main() {
    double number;
    std::cin >> number;
    std::cout << truncate_number(number) << std::endl;
    return 0;
}