#include <iostream>
#include <cmath>
#include <cassert>

int closest_integer(std::string value) {
    double num = std::stod(value);
    int lower = std::floor(num);
    int upper = std::ceil(num);
    return (num - lower < upper - num) ? lower : upper;
}

int main() {
    assert(closest_integer("0") == 0);
    return 0;
}