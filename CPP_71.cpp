#include <iostream>
#include <cmath>

float triangle_area(float a, float b, float c);

float triangle_area(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a) {
        float s = (a + b + c) / 2;
        return roundf(sqrt(s * (s - a) * (s - b) * (s - c)) * 100) / 100;
    }
    return -1;
}

int main() {
    float a, b, c;
    std::cin >> a >> b >> c;
    std::cout << triangle_area(a, b, c);
    return 0;
}