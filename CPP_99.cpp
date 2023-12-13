#include <string>
#include <cmath>
#include <cassert>
#include <iostream>

int closest_integer(std::string value) {
    double num = std::stod(value);
    int floor_num = std::floor(num);
    int ceil_num = std::ceil(num);
    if (num - floor_num < ceil_num - num) {
        return floor_num;
    } else {
        return ceil_num;
    }
}

int main() {
    std::string value;
    std::getline(std::cin, value);
    std::cout << closest_integer(value) << std::endl;

    return 0;
}