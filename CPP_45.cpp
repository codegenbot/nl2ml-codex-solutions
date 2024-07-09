double triangle_area(double a, double h) {
    return 0.5 * a * h;
}

#include <cmath>
#include <cassert>

int main() {
    assert(std::abs(triangle_area(10, 8) - 40.0) < 1e-4);
}