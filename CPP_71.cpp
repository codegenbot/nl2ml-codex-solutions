#include <cmath>

double triangle_area(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a) {
        double s = (a + b + c) / 2;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        return round(area * 100) / 100;
    } else {
        return -1;
    }
}

int main() {
    assert(std::abs(triangle_area(2, 2, 10) + 1) < 0.01);
}