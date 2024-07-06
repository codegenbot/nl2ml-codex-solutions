#include <cmath>
#include <cassert>

float calculate_triangle_area(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        float s = (a + b + c) / 2.0;
        return round((sqrt(s * (s - a) * (s - b) * (s - c))) * 100.0) / 100.0;
    } else {
        return -1.0f;
    }
}

int main() {
    assert(std::abs(calculate_triangle_area(2, 2, 10) + 1) < 0.01);
    return 0;
}