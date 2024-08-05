#include <cmath>
#include <iostream>
#include <cassert>

float triangle_area(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a) {
        float s = (a + b + c) / 2;
        return roundf(sqrt(s * (s - a) * (s - b) * (s - c)) * 100) / 100;
    }
    return -1;
}

int main() {
    assert(fabs(triangle_area(2, 2, 10) + 1) < 0.01);
    return 0;
}