```cpp
#include <iostream>
#include <cmath>
#include <cassert>

float triangle_area(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        float s = (a + b + c) / 2.0;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    } else {
        return -1.0f;
    }
}

int main() {
    float a = std::stof(std::cin.str()), b = std::stof(std::cin.str()), c = std::stof(std::cin.str());
    assert(std::abs(triangle_area(a, b, c) + 1)<0.01);
    float result = triangle_area(a, b, c);
    std::cout << "The area of the triangle is: " << static_cast<int>(result) << std::endl;
    return 0;
}